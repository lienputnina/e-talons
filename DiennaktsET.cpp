#include "DiennaktsET.h"
#include <chrono>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <sstream>

using namespace std;

DiennaktsET::DiennaktsET(int diennaktsSerialNumber, bool diennaktsActivated,
                         string diennakts_activation_date)
    : E_Talons(diennaktsSerialNumber) {
  serial = diennaktsSerialNumber > 0 ? diennaktsSerialNumber : 12345;
  activated = diennaktsActivated;
  activation_date = diennakts_activation_date;
};

string DiennaktsET::Use() {
  // Getting the current time
  auto currentTime = std::chrono::system_clock::now();

  /*
   Converting todays time to time_t to handle time as a calendar time.
  */
  auto todaysTime = std::chrono::system_clock::to_time_t(currentTime);

  /*
  Converting time_t into tm struct representing local time, a structure that
  holds calendar date and time broken down into its components.
  */
  std::tm todayTm = *localtime(&todaysTime);

  if (!activated) {
    activated = true;
    // Format today's date as a string "dd.mm.yyyy".
    std::ostringstream oss;

    /*
    Formatting time data to output the date in day.month.year format.
    */
    oss << std::put_time(&todayTm, "%d.%m.%Y");

    /*
    Retrieving the accumulated string from the string stream. oss contains so it
    can be stored in activation_date.
    */
    activation_date = oss.str();
  } else {
    /*
     Initializing a tm struct named activation_tm to store the parsed components
     of the date from activation_date.
    */
    std::tm activation_tm = {};

    /*
    Creating an istringstream object to read the date string and interpret its
    contents based on the specified format.
    */
    std::istringstream iss(activation_date);

    /*
    Reading the date in the format of day (%d), month (%m), and year (%Y), and
    filling the activation_tm structure with these values.
    */
    iss >> std::get_time(&activation_tm, "%d.%m.%Y");

    if (iss.fail()) {
      std::cerr << "Failed to parse activation date." << std::endl;
      return "";
    };

    /*
    Converting the tm structure (activation_tm) back into a time_t for comparing
    dates in a more straightforward format.
    */
    auto activation_time_t = mktime(&activation_tm);

    /*
     Taking a time_t value and converting it to a
     std::chrono::system_clock::time_point to get a more precise time point
    */
    auto activation_time =
        std::chrono::system_clock::from_time_t(activation_time_t);

    /*
    1.Converting the duration into hours to compare the differences between two
    time_point objects
    2. Retrieving the actual count of hours, representing the total hours
    elapsed since the activation.
    */
    auto duration = std::chrono::duration_cast<std::chrono::hours>(
                        currentTime - activation_time)
                        .count();

    if (duration <= 24) {
      cout << "Zaļš: "
           << "Diennakts E-talons is available for usage." << endl;
      cout << "\n";

    } else {
      cout << "Sarkans: "
           << "Diennakts E-talons cannot be used." << endl;
      cout << "\n";
    }
  }

  return activation_date;
};

void DiennaktsET::Print() const {
  string activationState = activated ? "activated" : "Not activated";

  cout << "Diennakts E-talons:" << endl;
  cout << "Serial number: " << serial << endl;
  cout << "State: " << activationState << endl;
  cout << "Activation date: " << activation_date << endl;
  cout << "\n";
}
