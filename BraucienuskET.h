#ifndef BraucienuskET_h
#define BraucienuskET_h

#include "ETalons.h"
#include <string>

using namespace std;

class BraucienuskET : public ETalons {

private:
  // Declaring trips as uint (unsigned int) to prevent negative numbers.
  uint trips;

public:
  BraucienuskET(uint serial, uint trips);

  /*
  1. Adding "virtual" to method signature for clarity  and also to show that
  these methods were virtual in the base class
  2. Adding "override" to signify that the base class implementation will be
  overriden/overwritten in the derived class
  */
  virtual void Use() override;
  virtual void Print() const override;
};

#endif