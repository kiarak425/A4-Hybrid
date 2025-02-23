#define CATCH_CONFIG_MAIN
#include "hybridCar.h"
//electricCar.cpp

std::string hybridCar::Drive() {
    return "Drive HybridCar";
}

double hybridCar::FuelEfficiency()
{
    return 10;
}

std::string hybridCar::ChargeBattery()
{
    return "ChargeBattery HybridCar";
}

std::string hybridCar::Refuel()
{
    return "Refuel HybridCar";
}

std::string hybridCar::SwitchMode()
{
    return "SwitchMode hybridCar";
}
