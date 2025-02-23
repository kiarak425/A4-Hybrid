#define CATCH_CONFIG_MAIN
#include "hybridCar.h"
//electricCar.cpp

std::string HybridCar::Drive() {
    return "Drive HybridCar";
}

double HybridCar::FuelEfficiency()
{
    return 10;
}

std::string HybridCar::ChargeBattery()
{
    return "ChargeBattery HybridCar";
}

std::string HybridCar::Refuel()
{
    return "Refuel HybridCar";
}

std::string HybridCar::SwitchMode()
{
    return "SwitchMode hybridCar";
}
