#include "BraucienuskET.h"
#include <iostream>

BraucienuskET::BraucienuskET(uint braucienuskSerialNumber, uint tripsLeft)
    : ETalons(braucienuskSerialNumber) {
  serial = braucienuskSerialNumber;
  trips = tripsLeft;
};

void BraucienuskET::Use() {
  string braucienuskSate;
  if (trips > 0) {
    cout << "Zaļš.More braucieni left." << endl;
    --trips;
  } else {
    cout << "Sarkans: "
         << "No braucieni left. Get more braucieni." << endl;
  };
};

void BraucienuskET::Print() const {
  cout << "Braucienusk E-talons:" << endl;
  cout << "Serial number: " << serial << endl;
  cout << "Trips left: " << trips << endl;
  cout << "\n";
};
