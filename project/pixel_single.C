{
    KPixel *det = new KPixel(1, 1 * 150, 1 * 100, 300); // 1 pixel, [um]
    TProfile *graph = new TProfile("vvscce", "Voltage vs Charge;Voltage[V];CCE", 80, -200.00, 200.00);

    Double_t CCE = 0;

    det->SetUpVolume(5, 5, 2);                                  // um cubes (speed vs granularity)
    det->SetUpPixel(0, 0.5 * 150, 0.5 * 100, 65, 40, 1, 16385); // collecting electrode at Grnd
    det->SetUpElectrodes();
    det->SetBoundaryConditions();
    det->Temperature = 293;
    det->diff = 1;
    det->Landau = 0;
    det->MTresh = 1.01; // multiplication
    det->BDTresh = 1.5; // breakdown

    // Specify Entry and Exit Points
    det->enp[0] = 0.5 * 150; // entry point x [um]
    det->enp[1] = 0.5 * 100; // entry point y
    det->enp[2] = 5;         // entry point z

    det->exp[0] = 0.5 * 150;
    det->exp[1] = 0.5 * 100;
    det->exp[2] = 295;

    int n = 600;
    det->Voltage = n; // above full depletion for Neff = 1, d = 300

    // Calculate Fields
    det->CalField(0); 
    det->CalField(1);

    det->MipIR(100); // Don't change 100
    CCE = det->sum->Integral();
    cout << n << " " << CCE << "\n";
}
