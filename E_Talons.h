#ifndef E_Talons_h
#define E_Talons_h

#include <string>

class E_Talons {

protected:
  int serial;

public:
  E_Talons(int serial);

  void Print();       // needs implementaion - should it be virtual?
  virtual void Use(); // what does it mean - "empty"?
  virtual void Add(); // what does it mean - "empty"?
};

#endif