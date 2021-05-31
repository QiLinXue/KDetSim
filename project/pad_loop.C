// NOTE: Needs to be run on web version KDetSim

{
  TProfile *graph = new TProfile("vvsq", "Voltage vs Charge;Voltage[V];Charge[q]", 80, -200.00, 200.00);
  TCanvas cEZX;
  Double_t q = 0;
  int x, y, z, n, a, b;
  int i, sum_avg = 0;

  KPad *det = new KPad(500, 300);        // dimensions of the sample
  
  TF1 *neff = new TF1("neff", "[0]", 0, 1000);
  neff->SetParameter(0, 0); // set Neff [1e12 cm-3]
  det->Neff = neff;
  det->SetUpVolume(1); // Setup electrodes
  det->SetUpElectrodes();

  det->SetEntryPoint(250, 299.9, 0.5); // define track entry point
  det->SetExitPoint(250, 1., 0.5);     // define track exit point
  det->Temperature = 293;             // set temperature
  det->diff = 1;                      // switch on diffusion

  for (int n = -200; n < 200; n += 5)
  {

    det->Voltage = n; // above full depletion for Neff = 1, d = 300
    det->CalField(0); // E-field
    det->CalField(1); // Ramo weight field

    // track:

    // det->ShowMipIR(120);

    det->MipIR(120);
    det->sum->Add(det->pos);
    det->sum->Add(det->neg);

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
  c1.Print("pad_loop.png");

}