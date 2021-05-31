
// root -l
// gSystem->Load( "/home/pitzl/silicon/KDetSim/lib/KDetSim.sl" );
// .x Pixel_1.C
// .ls

{
    KPixel *det = new KPixel(1, 1 * 150, 1 * 100, 300); // 1 pixel, [um]
    TProfile *graph = new TProfile("vvsq", "Voltage vs Charge;Voltage[V];Charge[q]", 80, -200.00, 200.00);
    TCanvas cEZX;
    Double_t q = 0;
    int x, y, z, n, a, b;
    int i, sum_avg = 0;

    //det->SetUpVolume( 5, 5, 5 ); // um cubes (speed vs granularity)
    det->SetUpVolume(5, 5, 2);                                  // um cubes (speed vs granularity)
    det->SetUpPixel(0, 0.5 * 150, 0.5 * 100, 65, 40, 1, 16385); // collecting electrode at Grnd
    det->SetUpElectrodes();
    det->SetBoundaryConditions();
    det->Temperature = 293;
    det->diff = 1;
    det->Landau = 0;

    det->enp[0] = 0.5 * 150; // entry point x [um]
    det->enp[1] = 0.5 * 100; // entry point y
    det->enp[2] = 5;         // entry point z

    det->exp[0] = 0.5 * 150;
    det->exp[1] = 0.5 * 100;
    det->exp[2] = 295;
    for (double n = -200; n <= 200; n+=5)
    {

        det->Voltage = n; // above full depletion for Neff = 1, d = 300
        det->CalField(0);    // E-field
        det->CalField(1);    // Ramo weight field

        // track:


        det->ShowMipIR(120);

        det->MipIR(120);
        det->sum->Add(det->pos);
        det->sum->Add(det->neg);

        cEZX;
        cEZX.SetTitle("Ez-x");
        det->Draw("EFxy", 9)->Draw("COLZ");
        //det->Draw( "EFxy", 9.5 )->Draw("TEXT SAME");
        cEZX.Update();

        q = det->sum->Integral();

          cout
        << "V " << n
        << ", Q" << q
        << endl;

        if (q < 0)
        {
            graph->Fill(n, (-q));
        }
        else
        {
            graph->Fill(n, q);
        }
    }

    TCanvas c1;
    graph->Draw("HIST L");
    graph->Draw("HIST L SAME");

    c1.Print("pixel_loop.png")
}
