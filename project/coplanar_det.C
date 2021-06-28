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

    Float_t teeth_size[3] = {teeth_length / 2, teeth_width / 2, thickness / 2};
    Float_t base_size[3] = {base_width / 2, base_height / 2, thickness / 2};

    Float_t Pos1[3]  = {det_width / 2 - teeth_gap, 0 * (teeth_width + teeth_gap) + teeth_width / 2, det_y};
    Float_t Pos2[3]  = {det_width / 2 + teeth_gap, 1 * (teeth_width + teeth_gap) + teeth_width / 2, det_y};
    Float_t Pos3[3]  = {det_width / 2 - teeth_gap, 2 * (teeth_width + teeth_gap) + teeth_width / 2, det_y};
    Float_t Pos4[3]  = {det_width / 2 + teeth_gap, 3 * (teeth_width + teeth_gap) + teeth_width / 2, det_y};
    Float_t Pos5[3]  = {det_width / 2 - teeth_gap, 4 * (teeth_width + teeth_gap) + teeth_width / 2, det_y};
    Float_t Pos6[3]  = {det_width / 2 + teeth_gap, 5 * (teeth_width + teeth_gap) + teeth_width / 2, det_y};
    Float_t Pos7[3]  = {det_width / 2 - teeth_gap, 6 * (teeth_width + teeth_gap) + teeth_width / 2, det_y};
    Float_t Pos8[3]  = {det_width / 2 + teeth_gap, 7 * (teeth_width + teeth_gap) + teeth_width / 2, det_y};
    Float_t Pos9[3]  = {det_width / 2 - teeth_gap, 8 * (teeth_width + teeth_gap) + teeth_width / 2, det_y};
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

    //............................................................................//
    //Running the drift simulation

    n = 200; // Voltage
    det->Voltage = n;

    //............................................................................//
    //Different entry spots, corresponding to paper

    float entryA_y = 5 * (teeth_width + teeth_gap) + teeth_width / 3;
    float entryA_x = det_width - base_width - 2*teeth_gap;

    float entryC_y = 5 * (teeth_width + teeth_gap) - teeth_gap / 2;
    float entryC_x = det_width - base_width - 2*teeth_gap;

    float entryB_y = 5 * (teeth_width + teeth_gap);
    float entryB_x = det_width - base_width + teeth_gap/3;

    float entryD_y = 5 * (teeth_width + teeth_gap) - teeth_gap;
    float entryD_x = det_width - base_width + teeth_gap/3;


    float entryE_y = 5 * (teeth_width + teeth_gap) + teeth_width / 2;
    float entryE_x = det_width/2;

    det->SetEntryPoint(entryA_x, entryA_y, det_y);
    det->SetExitPoint(entryA_x, entryA_y, det_y + 25); // Corresponds to a 2 MeV beam
    
    det->CalField(0);
    det->CalField(1);

    // IMPORTANT: Don't change 100 buckets.
    int ndiv = 100;
    det->ShowMipIR(ndiv);

    det->MipIR(ndiv);

    q = det->sum->Integral() / 744; // 744 is the total charge.

    cout << det->Voltage << " " << q << " " << "\n";

    // Draw transient
    TCanvas c3;
    det->sum->Add(det->pos);
    det->sum->Add(det->neg);
    det->sum->Draw();
    det->pos->Draw("SAME");
    det->neg->Draw("SAME");

/*
TODO List:

Simplified model: 2 coplanar electrodes
- Put beam through middle
- Move electrodes further apart, see what happens

Charge sharing? Position sensitive detector.

What happens if electrodes are inside the diamond? Should have higher gain. 

Look at literature: Do these numbers make sense?
- taue/tauh values
- simulation time (is 1 ns reasonable?)
- specifically, how fast is diffusion
- papers on transient current

Can it simulate pre-amplifiers + other electronics?

Is there a difference between diamond/silicon

Check Mobility
*/


}