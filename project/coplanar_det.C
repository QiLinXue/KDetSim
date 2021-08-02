{
    //Calling the type of detector among other variables
    gStyle->SetCanvasPreferGL(kTRUE);

    // Electrode Parametrization
    float thickness = 0.1;
    float teeth_width = 20;
    float teeth_length = 300;
    float teeth_gap = 90;
    float edge_gap = 100;
    float det_thickness = 150;
    float det_length = 10 * (teeth_width + teeth_gap);
    float det_width = 500;
    float base_width = (det_width - edge_gap - teeth_length) / 2;
    float base_height = det_length - teeth_gap - teeth_width;

    // Initialize Detector Class
    KPixel *det = new KPixel(11, det_width, det_length, det_thickness);
    float n;
    Double_t CCE = 0;

    //............................................................................//
    //Dimension and position of plate set up

    Float_t teeth_size[3] = {teeth_length / 2, teeth_width / 2, thickness / 2};
    Float_t base_size[3] = {base_width / 2, base_height / 2, thickness / 2};

    Float_t Pos2[2] = {base_width + teeth_length / 2 + edge_gap, 1 * (teeth_width + teeth_gap) + teeth_width / 2};
    Float_t Pos3[2] = {base_width + teeth_length / 2, 2 * (teeth_width + teeth_gap) + teeth_width / 2};
    Float_t Pos4[2] = {base_width + teeth_length / 2 + edge_gap, 3 * (teeth_width + teeth_gap) + teeth_width / 2};
    Float_t Pos5[2] = {base_width + teeth_length / 2, 4 * (teeth_width + teeth_gap) + teeth_width / 2};
    Float_t Pos6[2] = {base_width + teeth_length / 2 + edge_gap, 5 * (teeth_width + teeth_gap) + teeth_width / 2};
    Float_t Pos7[2] = {base_width + teeth_length / 2, 6 * (teeth_width + teeth_gap) + teeth_width / 2};
    Float_t Pos8[2] = {base_width + teeth_length / 2 + edge_gap, 7 * (teeth_width + teeth_gap) + teeth_width / 2};
    Float_t Pos9[2] = {base_width + teeth_length / 2, 8 * (teeth_width + teeth_gap) + teeth_width / 2};
    Float_t Pos10[2] = {base_width + teeth_length / 2 + edge_gap, 9 * (teeth_width + teeth_gap) + teeth_width / 2};

    Float_t PosS1[2] = {base_width / 2, base_height / 2};
    Float_t PosS2[2] = {det_width - base_width / 2, det_length - base_height / 2};

    //............................................................................//
    //Initializing values of the material and not the detector
    //Selecting the types of mobility models and setting the trapping time constants

    det->SetUpVolume(10, 10, 4); // x,y,z mesh size
    det->Temperature = 300;      // Temperature
    det->Mat = 10;               // Diamond
    det->Mobility = 10;          // Diamond
    det->diff = 1;               // Diffusion is on
    det->Landau = 0;             // No randomness

    det->MTresh = 1.01;  // Electron multiplication
    det->BDTresh = 1.01; // Hole multiplication (values copied from other simulations)

    det->taue = 2; // electron lifetime
    det->tauh = 2; // hole lifetime

    //............................................................................//
    //Set up of the coplanar electrode arrangement

    det->SetUpPixel(0, Pos2[0], Pos2[1], teeth_size[0], teeth_size[1], teeth_size[2], 16385);
    det->SetUpPixel(1, Pos3[0], Pos3[1], teeth_size[0], teeth_size[1], teeth_size[2], 2);
    det->SetUpPixel(2, Pos4[0], Pos4[1], teeth_size[0], teeth_size[1], teeth_size[2], 16385);
    det->SetUpPixel(3, Pos5[0], Pos5[1], teeth_size[0], teeth_size[1], teeth_size[2], 2);
    det->SetUpPixel(4, Pos6[0], Pos6[1], teeth_size[0], teeth_size[1], teeth_size[2], 16385);
    det->SetUpPixel(5, Pos7[0], Pos7[1], teeth_size[0], teeth_size[1], teeth_size[2], 2);
    det->SetUpPixel(6, Pos8[0], Pos8[1], teeth_size[0], teeth_size[1], teeth_size[2], 16385);
    det->SetUpPixel(7, Pos9[0], Pos9[1], teeth_size[0], teeth_size[1], teeth_size[2], 2);
    det->SetUpPixel(8, Pos10[0], Pos10[1], teeth_size[0], teeth_size[1], teeth_size[2], 16385);
    det->SetUpPixel(9, PosS1[0], PosS1[1], base_size[0], base_size[1], base_size[2], 2);
    det->SetUpPixel(10, PosS2[0], PosS2[1], base_size[0], base_size[1], base_size[2], 16385);

    //............................................................................//
    //Setting up the grounds of electrodes and the boundaries of the world box
    //Material setup of the world box too

    det->SetUpElectrodes();
    det->SetBoundaryConditions();

    //............................................................................//
    //Running the drift simulation

    n = -200; // Voltage
    det->Voltage = n;

    //............................................................................//
    //Different entry spots, corresponding to paper

    float entryA_y = teeth_gap + teeth_width;
    float entryA_x = base_width;

    float entryB_y = teeth_width + 2 * teeth_gap + 20;
    float entryB_x = base_width;

    float entryC_y = 2 * (teeth_width + teeth_gap) - teeth_gap - teeth_width / 2;
    float entryC_x = base_width + edge_gap / 2;

    float entryD_y = entryB_y;
    float entryD_x = base_width + edge_gap;

    // Set Entry and Exit Points
    det->SetEntryPoint(entryB_x, entryB_y, det_thickness);
    det->SetExitPoint(entryB_x, entryB_y, det_thickness - 25); // Corresponds to a 2 MeV beam

    // Calculate the Fields
    det->CalField(0);
    det->CalField(1);

    // IMPORTANT: Don't change 100 buckets.
    int ndiv = 100;
    det->ShowMipIR(ndiv);

    det->MipIR(ndiv);

    CCE = det->sum->Integral() / 744; // 744 is the total charge.

    cout << det->Voltage << " " << CCE << " "
         << "\n";

    // TCanvas c2;
    // det->Draw("Vxz", 250)->Draw("COLZ");;
    // det->sum->Print("All");
    // Draw transient
    // TCanvas c3;
    // det->sum->Add(det->pos);
    // det->sum->Add(det->neg);
    // det->sum->Draw();
    // det->pos->Draw("SAME");
    // det->neg->Draw("SAME");
}