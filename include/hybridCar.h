//hybridCar.h
#ifndef HYBRIDCAR_H
#define HYBRIDCAR_H

#include "electricCar.h"
#include "gasolineCar.h"
#include "car.h"

#include <string>
class HybridCar : public ElectricCar, public GasolineCar, public Car {
  public:
  std::string Drive() override;
  double FuelEfficiency() override;
  std::string ChargeBattery() override;
  std::string Refuel() override;
  std::string SwitchMode() override;
 }; 
 #endif