#ifndef DiennaktsET_h
#define DiennaktsET_h

#include "E_Talons.h"
#include <string>

using namespace std;

class DiennaktsET : public E_Talons {

private:
  string activation_date;
  bool activated;

public:
  DiennaktsET(int serial, bool activated, string activation_date);

  /*
  1. Adding "virtual" to method signature for clarity  and also to show that
  these methods were virtual in the base class
  2. Adding "override" to signify that the base class implementation will be
  overriden/overwritten in the derived class
  */
  virtual std::string Use() override;
  virtual void Print() const override;
};

#endif