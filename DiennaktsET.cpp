#include "DiennaktsET.h"
#include <iostream>

DiennaktsET::DiennaktsET(int diennaktsETSerialNumber, bool diennaktsETActivated)
    : E_Talons(diennaktsETSerialNumber) {
  serial = diennaktsETSerialNumber > 0 ? diennaktsETSerialNumber : 12345;
  activated = diennaktsETActivated;
  diennaktsETActivated = false;
};

string DiennaktsET::Use() {
  string todays_date = "30.04.2024";

  if (!activated) {
    activated = true;
    activation_date = "29.04.2024";
  } else if (activated) {

    // check if date differs from today's date for > 1 day
    // if yes, cout "zaļš", if no, cout "sarkans"
  };

  return activation_date;
};

void DiennaktsET::Print() const {
  string activationState = activated ? "activated" : "Not activated";

  cout << "Diennakts E-talons data: " << endl;
  cout << "Serial number: " << serial << endl;
  cout << "State " << activated << endl;
  cout << "Activation date: " << activation_date << endl;
}
