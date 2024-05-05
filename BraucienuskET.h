#ifndef BraucienuskET_h
#define BraucienuskET_h

#include "E_Talons.h"
#include <string>

using namespace std;

class BraucienuskET : public E_Talons {

private:
  int trips;

public:
  BraucienuskET(int serial, int trips);

  /*
  1. Adding "virtual" to method signature for clarity  and also to show that
  these methods were virtual in the base class
  2. Adding "override" to signify that the base class implementation will be
  overriden/overwritten in the derived class
  */
  virtual string Use() override;
  virtual void Print() const override;
};

#endif