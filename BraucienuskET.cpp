#include "BraucienuskET.h"
#include <iostream>

BraucienuskET::BraucienuskET(int braucienuskSerialNumber, int tripsLeft)
    : E_Talons(braucienuskSerialNumber) {
  serial = braucienuskSerialNumber > 0 ? braucienuskSerialNumber : 12345;
  trips = tripsLeft >= 0 ? tripsLeft : 0;
};

std::string BraucienuskET::Use() {
  if (trips > 0) {
    return "zaļš";
  } else {
    return "sarkans";
  }
};

void BraucienuskET::Print() const {
  std::cout << "Braucienusk E-talons data: " << std::endl;
  std::cout << "Serial number: " << serial << std::endl;
  std::cout << "Trips left: " << trips << std::endl;
};
