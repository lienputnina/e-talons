#include "BraucienuskET.h"
#include <iostream>

BraucienuskET::BraucienuskET(int braucienuskSerialNumber, int tripsLeft)
    : E_Talons(braucienuskSerialNumber) {
  serial = braucienuskSerialNumber > 0 ? braucienuskSerialNumber : 12345;
  trips = tripsLeft >= 0 ? tripsLeft : 0;
};

string BraucienuskET::Use() {
  string braucienuskSate;
  if (trips > 0) {
    cout << "Zaļš: "
         << "You have some braucieni left." << endl;
    cout << "\n";
  } else {
    cout << "Sarkans: "
         << "No braucieni left. Get more braucieni." << endl;
    cout << "\n";
  };

  --trips;

  cout << "You have " << trips << " braucieni left." << endl;
  cout << "\n";

  return braucienuskSate;
};

void BraucienuskET::Print() const {
  cout << "Braucienusk E-talons:" << endl;
  cout << "Serial number: " << serial << endl;
  cout << "Trips left: " << trips << endl;
  cout << "\n";
};
