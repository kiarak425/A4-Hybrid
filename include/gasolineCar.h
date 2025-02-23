//gasolineCar.h
#ifndef GASOLINECAR_H
#define GASOLINECAR_H

#include "car.h"
#include <string>
class gasolineCar : public car {
  public:
  std::string Drive() override;
  double FuelEfficiency() override;
  std::string Refuel() override;
 }; 
 #endif