
#include "HomeOwner.h"

void HomeOwner::getOutOfBed(SmartGeyserSystem& geyserSystem) {
    std::cout << "Homeowner gets out of bed.\n";
    geyserSystem.activateGeyser();
}
