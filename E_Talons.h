#ifndef E_Talons_h
#define E_Talons_h

#include <string>
using namespace std;

class E_Talons {

protected:
  int serial; // should it be a string? See, if 5 digits can be enforced somehow

public:
  /*
   Constructor is not virtual so it could be used in creating objects for the
   derived classes
  */
  E_Talons(int serial);
  virtual ~E_Talons(){};

  // Completely virtual function to make the whole class an abstract class
  virtual void Print() const = 0;

  /*
  Declaring Use() and Add() with empty implementations to align with the
  requirements
  */
  virtual string Use() { return 0; };
  virtual int Add() { return 0; };
};

#endif