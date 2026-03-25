#ifndef TICKET_H
#define TICKET_H

#include <ctime>
#include "Vehicle.h"

class Ticket {
private:
    int ticketID;
    time_t entryTime;
    Vehicle* vehicle;

public:
    Ticket(int id, Vehicle* v) {
        ticketID = id;
        vehicle = v;
        entryTime = time(0);
    }

    int getID() {
        return ticketID;
    }

    int getDuration() {
        time_t now = time(0);
        return difftime(now, entryTime) / 3600 + 1; // hours
    }

    Vehicle* getVehicle() {
        return vehicle;
    }
};

#endif