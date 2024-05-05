#ifndef E_Talons_h
#define E_Talons_h

#include <string>

class E_Talons {

protected:
  int serial; // should it be a string? See, if 5 digits can be enforced somehow

public:
  /*
   Constructor is not virtual so it could be used in creating objects for the
   derived classes
  */
  E_Talons(int serial);

  // Completely virtual function to make the whole class an abstract class
  virtual void Print() const = 0;

  /*
  Declaring only function prototypes because they will be redefined in derived
  classes
  */
  virtual std::string Use();
  virtual int Add();
};

#endif