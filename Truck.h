#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
public:
    Truck(string plate) : Vehicle(plate) {}

    double calculateFee(int hours) override {
        return hours * 10.0;
    }

    string getType() override {
        return "Truck";
    }
};

#endif