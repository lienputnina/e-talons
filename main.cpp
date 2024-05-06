
#include "BraucienuskET.h"
#include "DiennaktsET.h"
#include "E_Talons.h"
#include "PersoniskaisET.h"
#include <iostream>

using namespace std;

int main() {

  DiennaktsET TwentyFourHours(1111, true, "04.05.2024");
  DiennaktsET Diurnal(2222, false, "01.01.1970");

  BraucienuskET MyRides(3333, 10);
  BraucienuskET AllMyRides(4444, 1);

  PersoniskaisET MyOwn(5555, 2, "Froddo", "Baggins");
  PersoniskaisET MyPrecious(6666, 3, "Samwise", "Gamgee");

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

  cout << "Testing Diennakts E-Taloni:" << endl;

  TwentyFourHours.Use();
  TwentyFourHours.Print();

  Diurnal.Use();
  Diurnal.Print();

  cout << "Testing Braucienusk E-Taloni:" << endl;

  cout << "Using MyRides" << endl;
  MyRides.Use();
  MyRides.Use();
  MyRides.Print();

  cout << "Using AllMyRides" << endl;
  AllMyRides.Use();
  AllMyRides.Use();
  AllMyRides.Print();

  cout << "Testing Personiskais E-Taloni:" << endl;
  cout << "Frodo Using MyOwn" << endl;
  MyOwn.Use();
  MyOwn.Use();
  MyOwn.Use();
  MyOwn.Print();

  cout << "Adding more trips for Frodo:" << endl;
  MyOwn.Add(10);
  MyOwn.Print();

  cout << "Sam Using MyPrecious" << endl;
  MyPrecious.Use();
  MyPrecious.Use();
  MyPrecious.Use();
  MyPrecious.Use();
  MyPrecious.Print();

  cout << "Adding more trips for Sam:" << endl;
  MyPrecious.Add(15);
  MyPrecious.Print();

  return 0;
}