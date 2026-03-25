# 🚗 Smart Parking Management System

A **C++ console-based application** that simulates a real-world parking lot with vehicle management, slot allocation, ticket generation, and dynamic billing — built entirely with Object-Oriented Programming principles.

---

## 📌 Overview

The Smart Parking Management System handles the full lifecycle of parking operations: vehicles enter, get assigned to the nearest available slot, receive a timestamped ticket, and are billed dynamically upon exit based on vehicle type and duration. The system tracks lot occupancy and total revenue in real time.

This project demonstrates clean architecture, modular design, and scalability — making it ideal for learning and showcasing core OOP skills in C++.

---

## 🎯 Features

| Feature | Description |
|---|---|
| 🚘 Multi-Vehicle Support | Park Cars, Bikes, and Trucks with type-specific behavior |
| 🅿️ Auto Slot Allocation | Assigns the nearest available slot automatically |
| 🎫 Ticket Generation | Issues a unique ticket with entry timestamp per vehicle |
| ⏱️ Duration Tracking | Calculates parking duration on exit |
| 💰 Dynamic Billing | Computes fees based on vehicle type and time parked |
| 📊 Lot Status Display | View all slots — occupied and available — at a glance |
| 💵 Revenue Tracking | Tracks cumulative earnings across all transactions |

---

## 🧱 OOP Concepts Demonstrated

| Concept | Implementation |
|---|---|
| **Encapsulation** | Private data members with controlled access via getters/setters |
| **Inheritance** | `Vehicle` base class → `Car`, `Bike`, `Truck` derived classes |
| **Polymorphism** | Virtual `calculateFee()` method overridden per vehicle type |
| **Abstraction** | Clean interfaces hiding internal system complexity |
| **Composition** | `ParkingLot` owns and manages a collection of `ParkingSlot` objects |

---

## 🏗️ Project Structure

```
SmartParkingSystem/
├── main.cpp            # Entry point & menu loop
├── Vehicle.h           # Abstract base class for all vehicles
├── Car.h               # Car subclass with $5/hr rate
├── Bike.h              # Bike subclass with $2/hr rate
├── Truck.h             # Truck subclass with $10/hr rate
├── ParkingSlot.h       # Slot state management (occupied/available)
├── Ticket.h            # Ticket generation with timestamps
└── ParkingLot.h        # Core system: allocation, exit, status, revenue
```

---

## ⚙️ How It Works

```
┌─────────────┐     ┌──────────────────┐     ┌─────────────────┐
│  Vehicle    │────▶│  Slot Assigned   │────▶│  Ticket Issued │
│  Enters     │     │  (nearest free)  │     │  (w/ timestamp) │
└─────────────┘     └──────────────────┘     └─────────────────┘
                                                      │
                                                      ▼
┌─────────────┐     ┌──────────────────┐     ┌─────────────────┐
│  Slot Freed │◀────│  Fee Calculated │◀────│  Vehicle Exits  │
│  + Revenue  │     │  (type × hours)  │     │  (by ticket ID) │
└─────────────┘     └──────────────────┘     └─────────────────┘
```

---

## 🧮 Fee Structure

| Vehicle Type | Rate per Hour | Example (3 hrs) |
|---|---|---|
| 🚗 Car | $5/hr | $15 |
| 🏍️ Bike | $2/hr | $6 |
| 🚛 Truck | $10/hr | $30 |

---

## ▶️ Usage

### Compile & Run

```bash
g++ main.cpp -o parking
./parking
```

### Sample Interaction

```
========================================
    SMART PARKING MANAGEMENT SYSTEM
========================================
1. Park Vehicle
2. Exit Vehicle
3. Display Parking Status
4. Exit
========================================

Enter choice: 1
Enter vehicle type (car/bike/truck): car
Enter license plate: ABC-123

✅ Vehicle parked successfully!
   Ticket ID : 1
   Slot      : 3
   Entry Time: 14:32:07

----------------------------------------

Enter choice: 2
Enter Ticket ID: 1

🚗 Vehicle ABC-123 exited.
   Duration  : 2 hrs 15 min
   Fee       : $11.25
   Thank you!
```

---

## 🔮 Roadmap

- [ ] 💾 Persistent storage — save/load parking data to file
- [ ] 🧾 Receipt generation — exportable exit summaries
- [ ] 🧍 User accounts — reservations and loyalty tracking
- [ ] 📱 GUI — Qt or web-based interface
- [ ] 🧠 Smart predictions — AI-driven occupancy forecasting

---

## 📚 Learning Outcomes

- Master core OOP principles in C++ through a practical, real-world simulation
- Understand system design with composition, inheritance hierarchies, and polymorphic dispatch
- Practice modular architecture with clear separation of concerns
- Build scalable, maintainable code ready for feature extension

---

## 👨‍💻 Author

**Mazen Naji**

---

## ⭐ Contributing

Contributions are welcome! Fork the repo, create a feature branch, and open a pull request.