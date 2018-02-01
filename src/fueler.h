#ifndef _FUELER_H
#define _FUELER_H

class Fueler {
public:
  Fueler();

  void setMPG(int m) { mpg = m; };
  void setmilesTraveled(double miles) { addMiles(miles); };
  void setFuel(double f) { fuelConsumed = f; };

  double getFuelConsumed() { return fuelConsumed; };
  double getMilesTraveled() { return milesTraveled; };
  double getMPG() { return mpg; };

  void addMiles(double miles);
  void resetValues();
private:
  double fuelConsumed;
  double milesTraveled;
  double mpg;
};

#endif
