#include "fueler.h"

Fueler::Fueler() {

}

void Fueler::addMiles(double miles) {
  if(fuelConsumed > 0.0) {
    milesTraveled += miles;
    fuelConsumed -= (miles / mpg);
  }
}

void Fueler::resetValues() {
  milesTraveled = 0.0;
  fuelConsumed = 0.0;
  mpg = 0.0;
}
