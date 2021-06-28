# KDetector
This page contains the `KDetector` class that other classes such as `KPad`, `KPixel`, `K3D`, and `KStrip` are derived from. This contains methods related to field calculation, drift simulation, visualization, and IO.

## Class Attributes
The private attributes in this class relate mostly towards debugging and parameters related to the numerical solver, and so will not be documented (yet).

The public attributes include:

* `Float_t Voltage` - describes the voltage of a single electrode.
* `TarrayF Voltages` - describes an array of voltages
* `Tf3 *NeffF` - a 3D function describing the effective doping concentration, based on a [root class](https://root.cern.ch/doc/master/classTF3.html).
* `TH3D *NeffH` - a 3D histogram describing the effective doping concentration, based on a [root class](https://root.cern.ch/doc/master/classTH3D.html)
* `KField Ramo[99]` - a KField object that describes the Ramo weighting potential per readout node (involving the hole diffusion coefficient)
* `KField Real` - a KField object that describes the true electric field.
* `Float_t B[3]` - describes the magnetic field.
* `bool Landau` - whether the charge deposited should form a Landau (i.e. random) distribution (`Landau=1`), or should the charge be the same each time (`Landau=0`).
* `Float_t taue` - the effective trapping time constants for electrons
* `Float_t tauh` - the effective trapping time constants for holes
* `Int_t Breakdown` - describes whether breakdown occurs (`Breakdown=1`), or not (`Breakdown=0`).
* `Float_t MTresh` - the threshold for taking multiplication into account for electrons.
    * Default is `-1`, which implies no multiplication.
    * If `MTresh > 1`, then multiplication is taken into account.
* `Float_t BDTresh` - hole multiplication break down threshold.
