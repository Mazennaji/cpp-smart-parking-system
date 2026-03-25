#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
using namespace std;

class Vehicle {
protected:
    string licensePlate;
public:
    Vehicle(string plate) : licensePlate(plate) {}
    virtual double calculateFee(int hours) = 0;
    string getPlate() { return licensePlate; }
    virtual string getType() = 0;
};

#endif