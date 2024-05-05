
#include "PersoniskaisET.h"
#include <iostream>

using namespace std;
int main() {

  PersoniskaisET MyPrecious(1111, 5, "Lady", "Rainicorn");

  MyPrecious.Print();
  MyPrecious.Use();

  cout << "After adding some braucieni:" << endl;
  MyPrecious.Add(15);
  MyPrecious.Print();
  return 0;
}