// Note: This is an alternative method to set up the experiment using K3D instead of KPixel

{
    //Calling the type of detector among other variables
    gStyle->SetCanvasPreferGL(kTRUE);

    // Electrode Parametrization
    float thickness = 0;
    float det_thickness = 90;
    float det_height = 400;
    float det_width = 400;

    // Depth electrode is placed at
    float det_y = 0;

    // Initialize Detector Class
    K3D *det = new K3D(2, det_width, det_height, det_thickness);
    int x, y, z, a, b;
    float n;
    int i, sum_avg = 0;
    Double_t q = 0;

    //............................................................................//
    //Dimension and position of plate set up

    Float_t Pos1[3] = {det_width / 2, det_height / 2, 0};
    Float_t Pos2[3] = {det_width / 2, det_height / 2, det_thickness - 1};
    Float_t teeth_size[3] = {det_width / 2, det_height / 2, thickness / 2};

    //............................................................................//
    //Initializing values of the material and not the detector
    //Selecting the types of mobility models and setting the trapping time constants
    //Doping parameters as well as number of bins world box is divided into

    det->SetUpVolume(10, 0.5);
    det->Temperature = 300;
    det->Mat = 10;   // Diamond
    det->diff = 1;   // Diffusion is on
    det->Landau = 0; // No randomness

    det->MTresh = 1.01;  // Electron multiplication
    det->BDTresh = 1.50; // Hole multiplication (values copied from other simulations)

    det->taue = 42.3; // electron lifetime
    det->tauh = 12.2; // hole lifetime

    //............................................................................//
    //Set up of the coplanar electrode arrangement

    det->ElRectangle(Pos1, teeth_size, 16385, 1);
    det->ElRectangle(Pos2, teeth_size, 2, 1);

    //............................................................................//
    //Setting up the grounds of electrodes and the boundaries of the world box
    //Material setup of the world box too

    det->SetUpElectrodes();
    det->SetBoundaryConditions();
    det->SetUpMaterial(det->Mat);

    //............................................................................//
    //Running the drift simulation

    for (float n = -2500; n <= 1750; n += 50)
    {
        // n = 360; // Voltage
        det->Voltage = n;

        //............................................................................//
        // Entry/Exit spot is in the center
        float entry_x = det_width / 2;
        float entry_y = det_height / 2;
        det->SetEntryPoint(entry_x, entry_y, 0);
        det->SetExitPoint(entry_x, entry_y, 90); // Corresponds to a 2 MeV beam

        det->CalField(0);
        det->CalField(1);

        // IMPORTANT: Don't change 100 buckets.
        int ndiv = 100;
        det->ShowMipIR(ndiv);

        det->MipIR(ndiv);

        q = det->sum->Integral() / 100; // 744 is the total charge.

        std::ofstream outfile;
        outfile.open("output.txt", std::ios_base::app); // append instead of overwrite

        outfile << det->Voltage << " " << q << " "
                << endl;
    }

}