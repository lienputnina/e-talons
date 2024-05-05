#include "PersoniskaisET.h"
#include <iostream>

PersoniskaisET::PersoniskaisET(int personiskaisSerialNumber,
                               int personiskaisTrips, string personiskaisName,
                               string personiskaisSurname)
    : E_Talons(personiskaisSerialNumber) {
  serial = personiskaisSerialNumber > 0 ? personiskaisSerialNumber : 12345;
  trips = personiskaisTrips >= 0 ? personiskaisTrips : 0;
  name = personiskaisName.empty() ? "Jane" : personiskaisName;
  surname = personiskaisSurname.empty() ? "Doe" : personiskaisSurname;
};

string PersoniskaisET::Use() {
  string personiskaisSate;
  if (trips > 0) {
    cout << "Zaļš: ";
    cout << "\n";
  } else {
    cout << "Sarkans: "
         << "No braucieni left. Get more braucieni." << endl;
    cout << "\n";
  };

  --trips;

  // TODO - add same logic to Diennakts and Braucienusk
  cout << "You have " << trips << " braucieni left." << endl;
  cout << "\n";

  return personiskaisSate;
};

int PersoniskaisET::Add(int extraTrips) {
  trips += extraTrips;
  return extraTrips;
};

void PersoniskaisET::Print() const {
  cout << "Personiskais E-talons data: " << endl;
  cout << "Serial number: " << serial << endl;
  cout << "Trips left: " << trips << endl;
  cout << "Owner: " << endl;
  cout << "Name: " << name << endl;
  cout << "Surname: " << surname << endl;
  cout << "\n";
};
