#ifndef ETalons_h
#define ETalons_h

#include <string>
using namespace std;

class ETalons {

protected:
  // Declaring serial as uint (unsigned int) to prevent negative numbers.
  uint serial;

public:
  /*
  Declaring constructor as non-virtual, so it could be implemented and called in
  derived classes.
  */
  ETalons(int serial);

  /*
  Destructor has to be virtual, so that derived classes would call their own
  destructors, not the destructor of the base class. Especially important, if
  the base destructor has 'delete' command.
  */
  virtual ~ETalons(){};

  /*
  Declaring Print() and Use() as pure virtual methods to force their
  implementation in all derived classes.
  Pure virtual methods: function body is equal to 0;
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