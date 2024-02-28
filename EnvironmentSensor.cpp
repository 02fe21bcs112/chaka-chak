
#include "EnvironmentSensor.h"

int EnvironmentSensor::getCurrentTemperature() {
    return rand() % 30 + 1;
}
