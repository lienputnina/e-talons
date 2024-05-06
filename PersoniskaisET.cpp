#include "PersoniskaisET.h"
#include <iostream>

PersoniskaisET::PersoniskaisET(uint personiskaisSerialNumber,
                               uint personiskaisTrips, string personiskaisName,
                               string personiskaisSurname)
    : E_Talons(personiskaisSerialNumber) {
  serial = personiskaisSerialNumber;
  trips = personiskaisTrips;
  name = personiskaisName.empty() ? "Jane" : personiskaisName;
  surname = personiskaisSurname.empty() ? "Doe" : personiskaisSurname;
};

void PersoniskaisET::Use() {
  string personiskaisSate;
  if (trips > 0) {
    --trips;
    cout << "Zaļš. More braucieni left." << endl;
    cout << "\n";
  } else {
    cout << "Sarkans: "
         << "No braucieni left. Get more braucieni." << endl;
    cout << "\n";
  };
};

void PersoniskaisET::Add(int extraTrips) { trips += extraTrips; };

void PersoniskaisET::Print() const {
  cout << "Personiskais E-talons:" << endl;
  cout << "Serial number: " << serial << endl;
  cout << "Trips left: " << trips << endl;
  cout << "Name: " << name << endl;
  cout << "Surname: " << surname << endl;
  cout << "\n";
};
