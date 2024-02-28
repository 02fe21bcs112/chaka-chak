
#ifndef SMART_GEYSER_SYSTEM_H
#define SMART_GEYSER_SYSTEM_H

#include <iostream>
#include "EnvironmentSensor.h"
#include "WaterHeater.h"

class SmartGeyserSystem {
private:
    EnvironmentSensor temperatureSensor;
    WaterHeater heatingSystem;

public:
    int activateGeyser();
    void adjustTemperature(int requiredTemperature);
};

#endif
