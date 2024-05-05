#ifndef PersoniskaisET_h
#define PersoniskaisET_h

#include "E_Talons.h"
#include <string>

using namespace std;

class PersoniskaisET : public E_Talons {

private:
  int trips;
  string name;
  string surname;

public:
  PersoniskaisET(int serial, int trips, string name, string surname);

  /*
  1. Adding "virtual" to method signature for clarity and also to show that
  these methods were virtual in the base class
  2. Adding "override" to signify that the base class implementation will be
  overriden/overwritten in the derived class
  */
  virtual string Use() override;
  virtual int Add(int extraTrips);
  virtual void Print() const override;
};

#endif