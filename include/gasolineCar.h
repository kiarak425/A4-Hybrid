//gasolineCar.h
#ifndef GASOLINECAR_H
#define GASOLINECAR_H

#include "car.h"
#include <string>
class GasolineCar : public Car {
  public:
  std::string Drive() override;
  double FuelEfficiency() override;
  std::string Refuel() override;
 }; 
 #endif