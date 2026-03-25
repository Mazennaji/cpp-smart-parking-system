#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car(string plate) : Vehicle(plate) {}

    double calculateFee(int hours) override {
        return hours * 5.0;
    }

    string getType() override {
        return "Car";
    }
};

#endif