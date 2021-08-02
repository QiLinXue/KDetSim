{
    gStyle->SetCanvasPreferGL(kTRUE); // Style of Output

    // Electrode Parametrization
    float thickness = 1; // thickness of electrode
    float teeth_width = 20; // width of teeth
    float teeth_length = 400; // length of teeth
    float teeth_gap = 50; // gap between teeth

    // Detector Parametrization
    float det_thickness = 400; // depth of detector
    float det_height = 2 * teeth_width + teeth_gap; // Detector Length
    float det_width = teeth_length; // Detector Width

    Float_t Pos1[2] = {det_width / 2, teeth_width / 2}; // Position of center of teeth 1
    Float_t Pos2[2] = {det_width / 2, det_height - teeth_width / 2}; // Position of center of teeth 2
    Float_t teeth_size[3] = {teeth_length / 2, teeth_width / 2, thickness / 2}; // Length and Width of each teeth

    // Initialize Detector Class
    KPixel *det = new KPixel(2, det_width, det_height, det_thickness);

    //Set up of the coplanar electrode arrangement
    det->SetUpPixel(0, Pos1[0], Pos1[1], teeth_size[0], teeth_size[1], teeth_size[2], 2);
    det->SetUpPixel(1, Pos2[0], Pos2[1], teeth_size[0], teeth_size[1], teeth_size[2], 16385);

    //............................................................................//
    // Initialize Simulation Parameters
    det->SetUpVolume(6, 6, 4); // x,y,z sizes

    det->diff = 1;   // Diffusion is on
    det->Landau = 0; // No randomness
    det->Temperature = 300; // Temperature
    det->taue = 1.7; // electron lifetime
    det->tauh = 11; // hole lifetime

    int n = 200;
    det->Voltage = n; // Voltage

    // 10 = Diamond
    det->Mat = 10;   // Material
    det->Mobility = 10; // Mobility Model

    // Tells the program to consider electron/hole multiplication
    det->MTresh = 1.01; // Electron multiplication
    det->BDTresh = 1.01; // Hole multiplication


    //Setting up the grounds of electrodes and the boundaries of the world box
    det->SetUpElectrodes();
    det->SetBoundaryConditions();
    det->CalField(0);
    det->CalField(1);

    //............................................................................//
    // // entry spots
    float entry_x = det_width / 2;
    float entry_y = det_height / 2 - 20 * (teeth_gap / 100);
    det->SetEntryPoint(entry_x, entry_y, det_thickness);
    det->SetExitPoint(entry_x, entry_y, det_thickness - 25); // Corresponds to a 2 MeV beam


    // IMPORTANT: Don't change 100 buckets.
    int ndiv = 100;
    det->ShowMipIR(ndiv);
    det->MipIR(ndiv);

    Double_t CCE = det->sum->Integral() / 744; // 744 is the total charge.
    std::ofstream outfile;

    cout << n << " "
                 " "
         << CCE
         << endl;
}