#ifndef DiennaktsET_h
#define DiennaktsET_h

#include "ETalons.h"
#include <chrono>

class DiennaktsET : public ETalons {

private:
  std::chrono::system_clock::time_point activation_date;
  bool activated;

public:
  DiennaktsET(uint serial, bool activated);

  /*
  1. Adding "virtual" to method signature for clarity and also to show that
  these methods were virtual in the base class.
  2. Adding "override" to signify that the base class implementation will be
  overriden/overwritten in the derived class.
  */
  virtual void Use() override;
  virtual void Print() const override;

  void ChangeActivationDate(); // Method for changing the activation date
};

#endif