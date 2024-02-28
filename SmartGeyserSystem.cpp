

#include "SmartGeyserSystem.h"

int SmartGeyserSystem::activateGeyser() {
    int currentTemperature = temperatureSensor.getCurrentTemperature();
    int requiredTemperature = heatingSystem.calculateRequiredTemperature(currentTemperature);


    std::cout << "Geyser activated. Current temperature: " << currentTemperature << " degrees Celsius\n";
    std::cout << "Calculating required temperature: " << requiredTemperature << " degrees Celsius\n";

    adjustTemperature(requiredTemperature);

    return requiredTemperature;
}

void SmartGeyserSystem::adjustTemperature(int requiredTemperature) {

    std::cout << "Adjusting temperature to: " << requiredTemperature << " degrees Celsius\n";
}
