
#include "SmartBed.h"
#include "HomeOwner.h"

int main() {
    SmartGeyserSystem smartGeyserSystem;
    HomeOwner homeowner;
    SmartBed smartBed;

    smartBed.getOutOfBed(smartGeyserSystem);
    // homeowner.getOutOfBed(smartGeyserSystem);

    return 0;
}
