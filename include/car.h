//car.h
#ifndef CAR_H
#define CAR_H

#include <string>
class car {
  public:
  virtual std::string Drive() = 0;
  virtual double FuelEfficiency() = 0;
  virtual std::string ChargeBattery() = 0;
  virtual std::string Refuel() = 0;
  virtual std::string SwitchMode() = 0;
 }; 

#endif