{
    //Calling the type of detector among other variables
    gStyle->SetCanvasPreferGL(kTRUE);

    // Electrode Parametrization 
    float thickness = 0.1;
    float teeth_width = 30;
    float teeth_length = 300;
    float teeth_gap = 5;
    float det_thickness = 60;
    float det_height = 10*(teeth_width+teeth_gap);
    float det_width = 400;
    float base_width = (det_width - teeth_gap - teeth_length) / 2;
    float base_height = det_height - teeth_gap - teeth_width;

    // Depth electrode is placed at
    float det_y = 0;

    // Initialize Detector Class
    K3D *det = new K3D(12, det_width, det_height, det_thickness);
    int x, y, z, a, b;
    float n;
    int i, sum_avg = 0;
    Double_t q = 0;

    //............................................................................//
    //............................................................................//
    //Dimension and position of plate set up

    Float_t teeth_size[3] = {teeth_length / 2, teeth_width / 2, thickness / 2}; //{85,15,0.05};
    Float_t base_size[3] = {base_width / 2, base_height / 2, thickness / 2};    //{50,148.25,0.05};

    Float_t Pos1[3] = {det_width / 2 - teeth_gap, 0 * (teeth_width + teeth_gap) + teeth_width / 2, det_y};
    Float_t Pos2[3] = {det_width / 2 + teeth_gap, 1 * (teeth_width + teeth_gap) + teeth_width / 2, det_y};
    Float_t Pos3[3] = {det_width / 2 - teeth_gap, 2 * (teeth_width + teeth_gap) + teeth_width / 2, det_y};
    Float_t Pos4[3] = {det_width / 2 + teeth_gap, 3 * (teeth_width + teeth_gap) + teeth_width / 2, det_y};
    Float_t Pos5[3] = {det_width / 2 - teeth_gap, 4 * (teeth_width + teeth_gap) + teeth_width / 2, det_y};
    Float_t Pos6[3] = {det_width / 2 + teeth_gap, 5 * (teeth_width + teeth_gap) + teeth_width / 2, det_y};
    Float_t Pos7[3] = {det_width / 2 - teeth_gap, 6 * (teeth_width + teeth_gap) + teeth_width / 2, det_y};
    Float_t Pos8[3] = {det_width / 2 + teeth_gap, 7 * (teeth_width + teeth_gap) + teeth_width / 2, det_y};
    Float_t Pos9[3] = {det_width / 2 - teeth_gap, 8 * (teeth_width + teeth_gap) + teeth_width / 2, det_y};
    Float_t Pos10[3] = {det_width / 2 + teeth_gap, 9 * (teeth_width + teeth_gap) + teeth_width / 2, det_y};

    Float_t PosS1[3] = {base_width / 2, base_height / 2, det_y};
    Float_t PosS2[3] = {det_width - base_width / 2, det_height - base_height / 2, det_y};

    //............................................................................//
    //Initializing values of the material and not the detector
    //Selecting the types of mobility models and setting the trapping time constants
    //Doping parameters as well as number of bins world box is divided into

    det->SetUpVolume(2, 3);
    det->Temperature = 300;
    det->Mat = 10; // Diamond
    det->diff = 1; // Diffusion is on
    det->Landau = 0; // No randomness

    det->MTresh = 1.01; // Electron multiplication
    det->BDTresh = 1.50; // Hole multiplication (values copied from other simulations)

    det->taue = 1; // electron lifetime
    det->tauh = 1; // hole lifetime

    //............................................................................//
    //Set up of the coplanar electrode arrangement

    det->ElRectangle(Pos1, teeth_size, 2, 1);
    det->ElRectangle(Pos2, teeth_size, 16385, 1);
    det->ElRectangle(Pos3, teeth_size, 2, 1);
    det->ElRectangle(Pos4, teeth_size, 16385, 1);
    det->ElRectangle(Pos5, teeth_size, 2, 1);
    det->ElRectangle(Pos6, teeth_size, 16385, 1);
    det->ElRectangle(Pos7, teeth_size, 2, 1);
    det->ElRectangle(Pos8, teeth_size, 16385, 1);
    det->ElRectangle(Pos9, teeth_size, 2, 1);
    det->ElRectangle(Pos10, teeth_size, 16385, 1);
    det->ElRectangle(PosS1, base_size, 2, 1);
    det->ElRectangle(PosS2, base_size, 16385, 1);

    //............................................................................//
    //Setting up the grounds of electrodes and the boundaries of the world box
    //Material setup of the world box too

    det->SetUpElectrodes();
    det->SetBoundaryConditions();
    det->SetUpMaterial(det->Mat);
    float entryA_y = 5 * (teeth_width + teeth_gap) + teeth_width / 4;
    float entryA_x = det_width - base_width - 2 * teeth_gap;

    float entryC_y = 5 * (teeth_width + teeth_gap) - teeth_gap / 2;
    float entryC_x = det_width - base_width - 2 * teeth_gap;

    float entryB_y = 5 * (teeth_width + teeth_gap);
    float entryB_x = det_width - base_width + teeth_gap / 3;

    float entryD_y = 5 * (teeth_width + teeth_gap) - teeth_gap;
    float entryD_x = det_width - base_width + teeth_gap / 3;

    //............................................................................//
    //Running the drift simulation

    // Loop through all 4 sites
    for (int i = 0; i < 4; i += 1)
    {
        TProfile *graph = new TProfile("vvsq", "Voltage vs Charge;Voltage[V];Charge[q]", 80, -200, 200);

        // for (double x = base_width; x < det_width - base_width; x += (teeth_length + 2 * teeth_gap) / 10)
        // {
        //     for (double y = 5 * (teeth_width + teeth_gap); y < 6 * (teeth_width + teeth_gap); y += (teeth_width + teeth_gap) / 10)
        //     {

        char names[4][30] = {
            "coplanar_loop_A.png",
            "coplanar_loop_B.png",
            "coplanar_loop_C.png",
            "coplanar_loop_D.png"};

        float x_entries[] = {
            entryA_x, entryB_x, entryC_x, entryD_x};

        float y_entries[] = {
            entryA_y, entryB_y, entryC_y, entryD_y};

        for (double n = -200; n < 200; n += 5)
        {
            det->Voltage = n;

            det->SetEntryPoint(x_entries[i], y_entries[i], det_y);
            det->SetExitPoint(x_entries[i], y_entries[i], det_y + 25);
            det->CalField(0);
            det->CalField(1);

            det->MipIR(100);
            q = det->sum->Integral() / 744;

            cout
                << n << " "
                << q
                << endl;

            std::ofstream outfile;

            outfile.open("output.txt", std::ios_base::app); // append instead of overwrite

            if (q < 0)
            {
                graph->Fill(n, (-q));
                outfile << names[i] << " " << n << " "
                        << -q
                        << endl;
            }
            else
            {
                graph->Fill(n, q);
                outfile << names[i] << " " << n << " "
                        << q
                        << endl;
                // }
            }
        }

        TCanvas c1;
        graph->Draw("HIST L");
        graph->Draw("HIST L SAME");
        c1.Print(names[i]);
    }
}
