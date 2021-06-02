# KGeometry
## Class Attributes
This page contains the `KGeometry` class, which describes the various shapes that electrodes can take on, as well as the boundary conditions.

* `TH3I EG` - describes the size and number of divisions of the electrode geometry in three dimensions in a root [histogram class](https://root.cern.ch/doc/master/classTH3I.html)
    * This 3D histogram can later be populated by information, such as the voltage boundary conditions.
* `TH3I DM` - similar to `EG`, except it is a histogram that describes the material of the detector.
* `Int_t nx,ny,nz` - describes the number of x,y,z respectively. 

## Class Methods

### GetGrid
The function `void GetGrid( TH3I *x, Short_t which )` takes in a pointer to a 3D histogram, and a variable `which`, which decides whether to `x` to `EG` or `DM` by the following rule:

* `which=0` copies `x` to `EG`
* `which=1` copies `x` to `DM`

### Reset
The function `void Reset( Int_t Which, Int_t What)` resets all bins in either `EG` or `DM`, determined by the variable `which` as described above, to a default value of `What.`

### SetBoundaryConditions
The function `Int_t SetboundaryConditions()` sets up the boundary conditions by looping through all cells in `EG` and depending on their location, encodes information regarding their boundary condition if applicable.

Returns 0.

### MapToGeometry
The function `TH3D MapToGeometry(Double_t *x, Double_t Scale)` takes in a one-dimensional vector `x` (which has size `n_xn_yn_z`) and returns the vector in the form of a histogram. The variable `Scale` tells us how much the parameters should be scaled by.

### GetStepSize
The function `Double_t GetStepSize(Int_t dir, Float_t x)` gets the step size of `EG` in a specific direction `dir` and at a specific location on the axis at `x`. The possible values of `dir` are:

* `dir=0`: X-axis
* `dir=1`: Y-axis
* `dir=2`: Z-Axis
* default: X-axis

### GetLowEdge and GetUpEdge
The functions `Float_t GetLowEdge(Int_t dir)` and `GetUpEdge(Int_t dir)` returns the edge of `EG` in a certain direction `dir`, defined in the same way as above.