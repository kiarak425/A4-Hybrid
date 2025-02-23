//electricCar.h
#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include "car.h"
#include <string>
class ElectricCar : public Car {
  public:
  std::string Drive() override;
  double FuelEfficiency() override;
  std::string ChargeBattery() override;
}; 
#endif