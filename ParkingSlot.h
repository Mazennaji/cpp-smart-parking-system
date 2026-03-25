#ifndef PARKINGSLOT_H
#define PARKINGSLOT_H

#include "Vehicle.h"

class ParkingSlot {
private:
    int slotNumber;
    bool occupied;
    Vehicle* vehicle;

public:
    ParkingSlot(int num) {
        slotNumber = num;
        occupied = false;
        vehicle = nullptr;
    }

    bool isAvailable() {
        return !occupied;
    }

    bool assignVehicle(Vehicle* v) {
        if (!occupied) {
            vehicle = v;
            occupied = true;
            return true;
        }
        return false;
    }

    void removeVehicle() {
        vehicle = nullptr;
        occupied = false;
    }

    int getSlotNumber() {
        return slotNumber;
    }
};

#endif