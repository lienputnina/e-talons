
#include "BraucienuskET.h"
#include "DiennaktsET.h"
#include "ETalons.h"
#include "PersoniskaisET.h"
#include <iostream>

using namespace std;

int main() {
  DiennaktsET TwentyFourHours1(1111, true);
  DiennaktsET TwentyFourHours2(2222, false);

  BraucienuskET RideCount1(3333, 10);
  BraucienuskET RideCount2(4444, 1);

  PersoniskaisET MyPrecious1(5555, 2, "Froddo", "Baggins");
  PersoniskaisET MyPrecious2(6666, 3, "Samwise", "Gamgee");

  ETalons *arrayOfETaloni[6];
  arrayOfETaloni[0] = &TwentyFourHours1;
  arrayOfETaloni[1] = &TwentyFourHours2;
  arrayOfETaloni[2] = &RideCount1;
  arrayOfETaloni[3] = &RideCount2;
  arrayOfETaloni[4] = &MyPrecious1;
  arrayOfETaloni[5] = &MyPrecious2;

  cout << "Printing data for all E-Taloni:" << endl;
  cout << "\n";

  for (int i = 0; i < 6; i++) {
    arrayOfETaloni[i]->Print();
  };

  cout << "Testing Diennakts E-Taloni." << endl;
  cout << "\n";

  cout << "Diennakts E-Talons nr.1:" << endl;
  TwentyFourHours1.Use();
  TwentyFourHours1.Print();

  cout << "Changing activation date to two days ago:" << endl;
  TwentyFourHours1.ChangeActivationDate();

  TwentyFourHours1.Use();
  TwentyFourHours1.Print();

  cout << "Diennakts E-Talons nr.2:" << endl;
  cout << "Activating e-talons nr.2" << endl;
  TwentyFourHours2.Use();
  TwentyFourHours2.Print();

  cout << "Testing Braucienusk E-Taloni." << endl;
  cout << "\n";

  cout << "Braucienusk E-Talons nr.1:" << endl;
  RideCount1.Use();
  RideCount1.Print();

  cout << "Braucienusk E-Talons nr.2:" << endl;
  RideCount2.Use();
  RideCount2.Use();
  RideCount2.Print();

  cout << "Testing Personiskais E-Taloni." << endl;
  cout << "\n";

  cout << "Frodo Using MyPrecious1." << endl;
  MyPrecious1.Use();
  MyPrecious1.Use();
  MyPrecious1.Use();
  MyPrecious1.Print();

  cout << "Adding more trips for Frodo:" << endl;
  MyPrecious1.Add(10);
  MyPrecious1.Print();

  cout << "Sam Using MyPrecious2." << endl;
  MyPrecious2.Use();
  MyPrecious2.Use();
  MyPrecious2.Use();
  MyPrecious2.Use();
  MyPrecious2.Print();

  cout << "Adding more trips for Sam:" << endl;
  MyPrecious2.Add(15);
  MyPrecious2.Print();

  return 0;
}