#ifndef E_Talons_h
#define E_Talons_h

#include <string>
using namespace std;

class E_Talons {

protected:
  int serial; // should it be a string?

public:
  E_Talons(int serial);

  virtual void Print() const = 0; // should this return 0?
  virtual string Use();
  virtual int Add();
};

#endif