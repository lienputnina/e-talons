#ifndef E_Talons_h
#define E_Talons_h

#include <string>
using namespace std;

class E_Talons {

protected:
  // Declaring serial as uint (unsigned int) to prevent negative numbers.
  uint serial;

public:
  /*
  Declaring constructor as non-virtual, so it could be implemented and called in
  derived classes.
  */
  E_Talons(int serial);
  virtual ~E_Talons(){};

  /*
  Declaring Print() and Use() as pure virtual methods to force their
  implementation in all derived classes.
  */
  virtual void Print() const = 0;
  virtual void Use() = 0;

  /*
  Providing a default implementation for Add() to avoid forcing it's
  implementation in all derived classes.
  */
  virtual void Add(){};
};

#endif