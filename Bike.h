#ifndef BIKE_H
#define BIKE_H

#include "Vehicle.h"

class Bike : public Vehicle {
public:
    Bike(string plate) : Vehicle(plate) {}

    double calculateFee(int hours) override {
        return hours * 2.0;
    }

    string getType() override {
        return "Bike";
    }
};

#endif