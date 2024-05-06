
#include "BraucienuskET.h"
#include "DiennaktsET.h"
#include "ETalons.h"
#include "PersoniskaisET.h"
#include <iostream>

using namespace std;

int main() {
  DiennaktsET TwentyFourHours1(1111, true, "04.05.2024");
  DiennaktsET TwentyFourHours2(2222, false, "01.01.1970");

  BraucienuskET MyRides(3333, 10);
  BraucienuskET AllMyRides(4444, 1);

  PersoniskaisET MyOwn(5555, 2, "Froddo", "Baggins");
  PersoniskaisET MyPrecious(6666, 3, "Samwise", "Gamgee");

  ETalons *arrayOfETaloni[6];
  arrayOfETaloni[0] = &TwentyFourHours1;
  arrayOfETaloni[1] = &TwentyFourHours2;
  arrayOfETaloni[2] = &MyRides;
  arrayOfETaloni[3] = &AllMyRides;
  arrayOfETaloni[4] = &MyOwn;
  arrayOfETaloni[5] = &MyPrecious;

  cout << "Printing data for all E-Taloni" << endl;
  cout << "\n";

  for (int i = 0; i < 6; i++) {
    arrayOfETaloni[i]->Print();
  };

  cout << "Testing Diennakts E-Taloni:" << endl;

  TwentyFourHours1.Use();
  TwentyFourHours1.Print();

  TwentyFourHours2.Use();
  TwentyFourHours2.Print();

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
  cout << "Frodo Using MyOwn." << endl;
  MyOwn.Use();
  MyOwn.Use();
  MyOwn.Use();
  MyOwn.Print();

  cout << "Adding more trips for Frodo:" << endl;
  MyOwn.Add(10);
  MyOwn.Print();

  cout << "Sam Using MyPrecious." << endl;
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