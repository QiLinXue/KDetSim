# KMaterial
This page contains functions and the `KMaterial` class that describes the properties of various materials.

## Helper Functions
Refer to [this](https://www.iue.tuwien.ac.at/phd/park/node36.html) for background information. The gain factor, or multiplication coefficient $M(x)$ corresponds to the total number of electron-hole pairs created in the depletion region by a single electron-hole pair generated at a distance $x$:

$$M(x) = \frac{\exp(I)}{1-\int_x^W \alpha_p \exp(I) \text{ dx}}$$

with $I=\int_0^x \alpha_n M(x) \text{ dx}$. Here, $\alpha_n$ and $\alpha_p$ are the ionization coefficients.
### KM
The function `Double_t KAlpha(Double_t E, Short_t Charg, Int_t which)` determines the ionization coefficients for an electric field `E`, a charge `Charg`, and a material described by `which`.

* `Double_t E` - electric field with units $\mathrm{V/\mu m}$.
* `Short_t Charge` Either $1$ for holes or $-1$ for electrons.
* `Int_t which` Currently, data for the following materials are available:
    * Silicon: 0
    * Diamond (Trew): 10
    * Diamond (Watanabe): 11
    * Diamond (Hiraiwa): 12

### KAlpha
The function `Double_t KM(TH1D *his, Float_t Start, Short_t Rev)` determines the number of electron-hole pairs generated at the point `Start` given the electric field profile `his`. This is also known as the *gain factor*.

* `TH1D *his` - electric field profile, given as a root [histogram class](https://root.cern.ch/doc/master/classTH1D.html).
* `Float_t Start` - creation point of the e-h pair for multiplication junction Start=0; the opposite side of the junction Start=thickness;
* `Short_t Rev` - in the calculation it is assumed that electrons drift in the high field region (`Rev=0`). If the holes drift then `Rev=1`;

## Class Attributes
The `KMaterial` class does not contain any private variables. It contains the following public variables:

* `Int_t Mat` Material Index (default: 1)
    * Silicon: 0
    * Poly Silicon: 1
    * Silicon Oxide: 2
    * Diamond: 10
    * Air: 20
    * Aluminum: 100
* `Float_t Temperature` Temperature in Kelvin (default: 293)
* `Mobility` Mobility Model (default: 1)
    * Canali: 1
    * Scharf: 3
    * Jacoboni: 4
* `Int_t ImpactIonization` Impact Ionization Coefficient (default: 0)

## Class Methods

### Perm
The function `Float_t Perm(Int_t Material)` determines the relative permeability $\epsilon_r$ of the material depending on the value of `Mat.`

### MobMod
The function `Int_t MobMod` determines the mode of mobility depending on `Mat` and `Mobility.` Note that `Mobility` is only taken into account if the material is silicon.

### dEX
The function `Float_t dEX(Double_t E, Double_t *x, Double_t *y, Double_t eps)` is not used by anything else.

### dEdx
The function `Float_t dEDx(Double_t E)` is not used by anything else.