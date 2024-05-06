
#include "BraucienuskET.h"
#include "DiennaktsET.h"
#include "E_Talons.h"
#include "PersoniskaisET.h"
#include <iostream>

using namespace std;
int main() {

  DiennaktsET TwentyFourHours(1111, true, "06.05.2024");
  DiennaktsET Diurnal(2222, false, "");

  BraucienuskET MyRides(3333, 10);
  BraucienuskET AllMyRides(4444, 0);

  PersoniskaisET MyOwn(5555, 8, "Froddo", "Baggins");
  PersoniskaisET MyPrecious(6666, 16, "Samwise", "Gamgee");

  E_Talons *arrayOfE_Taloni[6];
  arrayOfE_Taloni[0] = &TwentyFourHours;
  arrayOfE_Taloni[1] = &Diurnal;
  arrayOfE_Taloni[2] = &MyRides;
  arrayOfE_Taloni[3] = &AllMyRides;
  arrayOfE_Taloni[4] = &MyOwn;
  arrayOfE_Taloni[5] = &MyPrecious;

  cout << "Printing data for all E-Taloni" << endl;
  cout << "\n";

  for (int i = 0; i < 6; i++) {
    arrayOfE_Taloni[i]->Print();
  };

  return 0;
}