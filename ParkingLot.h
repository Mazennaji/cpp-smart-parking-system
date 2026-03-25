#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <vector>
#include <map>
#include "ParkingSlot.h"
#include "Ticket.h"

class ParkingLot {
private:
    vector<ParkingSlot> slots;
    map<int, Ticket*> tickets;
    int ticketCounter;
    double totalEarnings;

public:
    ParkingLot(int size) {
        ticketCounter = 1;
        totalEarnings = 0;

        for (int i = 1; i <= size; i++) {
            slots.push_back(ParkingSlot(i));
        }
    }

    int parkVehicle(Vehicle* v) {
        for (auto &slot : slots) {
            if (slot.isAvailable()) {
                slot.assignVehicle(v);
                Ticket* t = new Ticket(ticketCounter, v);
                tickets[ticketCounter] = t;

                cout << "Vehicle parked at slot " << slot.getSlotNumber() << endl;
                return ticketCounter++;
            }
        }
        cout << "Parking Full!" << endl;
        return -1;
    }

    void exitVehicle(int id) {
        if (tickets.find(id) == tickets.end()) {
            cout << "Invalid Ticket!" << endl;
            return;
        }

        Ticket* t = tickets[id];
        int hours = t->getDuration();
        double fee = t->getVehicle()->calculateFee(hours);

        totalEarnings += fee;

        for (auto &slot : slots) {
            if (!slot.isAvailable()) {
                slot.removeVehicle();
                break;
            }
        }

        cout << "Vehicle exited. Fee: $" << fee << endl;

        delete t;
        tickets.erase(id);
    }

    void displayStatus() {
        int freeSlots = 0;
        for (auto &slot : slots) {
            if (slot.isAvailable()) freeSlots++;
        }

        cout << "Free Slots: " << freeSlots << "/" << slots.size() << endl;
        cout << "Total Earnings: $" << totalEarnings << endl;
    }
};

#endif