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
  DiennaktsET(int serial, bool activated);

  virtual string Use();
  virtual void Print() const;
};

#endif