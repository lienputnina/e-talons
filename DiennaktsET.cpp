#include "DiennaktsET.h"
#include <chrono>
#include <iomanip>
#include <iostream>

using namespace std;

DiennaktsET::DiennaktsET(uint diennaktsSerialNumber, bool diennaktsActivated)
    : ETalons(diennaktsSerialNumber) {
  serial = diennaktsSerialNumber;
  activated = diennaktsActivated;

  /*
  If E-Talons is activated upon instantiation, set the activation date to the
  current time.
  */
  if (diennaktsActivated) {
    activation_date = std::chrono::system_clock::now();
  };
};

void DiennaktsET::ChangeActivationDate() {

  // Creating a time object that represents 48 hours.
  auto two_days_ago = std::chrono::hours(48);

  /*
  Subtracting 48 hours from the current time to set the activation date to two
  days ago.
  */
  activation_date = std::chrono::system_clock::now() - two_days_ago;
}

void DiennaktsET::Use() {

  // Getting the current time
  auto currentTime = std::chrono::system_clock::now();

  if (!activated) {
    activated = true;

    // Assigning today's date to the activation date
    activation_date = currentTime;

    cout << "Activation successful." << endl;
    cout << "\n";
  } else {
    // Calculate the time elapsed since activation and validate the ticket.
    auto duration = std::chrono::duration_cast<std::chrono::hours>(
                        currentTime - activation_date)
                        .count();

    if (duration <= 24) {
      cout << "Zaļš. Diennakts E-talons is valid." << endl;
      cout << "\n";

    } else {
      cout << "Sarkans. Diennakts E-talons is not valid." << endl;
      cout << "\n";
    }
  }
};

void DiennaktsET::Print() const {
  cout << "Diennakts E-talons:" << endl;
  cout << "Serial Number: " << serial << endl;
  cout << "State: " << (activated ? "activated" : "not activated") << endl;

  if (activated) {
    // Displaying activation date in a human-readable format.
    auto activationTime = std::chrono::system_clock::to_time_t(activation_date);
    cout << "Activation Date: "
         << std::put_time(std::localtime(&activationTime), "%d.%m.%Y") << endl;
  };

  cout << "\n";
}
