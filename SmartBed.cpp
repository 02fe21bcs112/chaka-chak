
#include "SmartBed.h"

void SmartBed::getOutOfBed(SmartGeyserSystem& geyserSystem) {
    std::cout << "Homeowner gets out of bed.\n";
    geyserSystem.activateGeyser();
}
