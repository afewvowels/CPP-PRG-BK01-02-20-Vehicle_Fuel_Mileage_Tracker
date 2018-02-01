#include "fueler.h"
#include <iostream>

using namespace std;

int main() {
  Fueler vehicle;

  cout << "Program ran\n";

  vehicle.resetValues();
  vehicle.setFuel(100.0);
  vehicle.setMPG(10.0);
  vehicle.addMiles(50.0);

  cout << "Fuel remaining: " << vehicle.getFuelConsumed() << endl;
  cout << "MPG: " << vehicle.getMPG() << endl;
  cout << "Miles traveled: " << vehicle.getMilesTraveled() << endl;

  return 0;
}
