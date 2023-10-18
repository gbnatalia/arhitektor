#ifndef LESSON3_REFUELING_HPP
#define LESSON3_REFUELING_HPP

#include <iostream>

using namespace std;

enum FuelType { Diesel, Gasoline};
enum CarType {  Sedan, Hatchback, Pickup, Sport };
enum GearboxType { AT /* Automatic transmission*/, MT  /* Manual transmission*/};   // Тип коробки передач

// Заправочная станция - базовый класс
class Refueling {
public:
    // Заправка
    virtual void fuel(FuelType fuelType) = 0;
};


// Заправочная станция 1
class RefuelingStation : public Refueling {

    void processfuel(FuelType fuelType) {
        switch (fuelType) {
            case Diesel:    cout << "Заправка дизельным топливом" << endl;
            case Gasoline:  cout << "Заправка бензином" << endl;
        }
    }

public:
    virtual void fuel(FuelType fuelType) {processfuel(fuelType); }
};


// Заправочная станция 2
class RefuelingStationV2 : public Refueling {

    void processfuel(FuelType fuelType) {
        switch (fuelType) {
            case Diesel:     cout << "Заправка дизельным топливом" << endl;
            case Gasoline:   cout << "Заправка бензином" << endl;
        }
    }

public:
    virtual void fuel(FuelType fuelType) {processfuel(fuelType); }
};

#endif //LESSON3_REFUELING_HPP
