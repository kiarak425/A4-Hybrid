//hybridCar.h
#ifndef HYBRIDCAR_H
#define HYBRIDCAR_H

#include "electricCar.h"
#include "gasolineCar.h"

#include <string>
class hybridCar : public electricCar, public gasolineCar {
  public:
  std::string Drive() override;
  double FuelEfficiency() override;
  std::string ChargeBattery() override;
  std::string Refuel() override;
  std::string SwitchMode() override;
 }; 
 #endif