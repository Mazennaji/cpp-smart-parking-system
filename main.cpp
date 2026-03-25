#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bike.h"
#include "Truck.h"

using namespace std;

int main() {
    ParkingLot lot(5);

    int choice;

    while (true) {
        cout << "\n1. Park Vehicle\n2. Exit Vehicle\n3. Status\n4. Exit\n";
        cin >> choice;

        if (choice == 1) {
            string type, plate;
            cout << "Enter type (car/bike/truck): ";
            cin >> type;
            cout << "Enter plate: ";
            cin >> plate;

            Vehicle* v = nullptr;

            if (type == "car") v = new Car(plate);
            else if (type == "bike") v = new Bike(plate);
            else if (type == "truck") v = new Truck(plate);
            else {
                cout << "Invalid type!\n";
                continue;
            }

            int ticket = lot.parkVehicle(v);
            if (ticket != -1)
                cout << "Ticket ID: " << ticket << endl;
        }

        else if (choice == 2) {
            int id;
            cout << "Enter ticket ID: ";
            cin >> id;
            lot.exitVehicle(id);
        }

        else if (choice == 3) {
            lot.displayStatus();
        }

        else if (choice == 4) {
            break;
        }
    }

    return 0;
}