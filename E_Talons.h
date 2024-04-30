#ifndef E_Talons_h
#define E_Talons_h

#include <string>
using namespace std;

class E_Talons {

protected:
  int serial; // should it be a string? See, if 5 digits can be enforced somehow

public:
  E_Talons(int serial);

  virtual void Print() const = 0;
  virtual string Use();
  virtual int Add();
};

#endif