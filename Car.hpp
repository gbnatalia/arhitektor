#ifndef LESSON3_CAR_HPP
#define LESSON3_CAR_HPP

#include <string>
#include <iostream>
#include "Refueling.hpp"
#include "Wiping.hpp"

using namespace std;

enum Color {BLACK, RED, GREEN, YELLOW, BLUE};


// Машина
class Car {

    Refueling  * _refueling = nullptr;
    Wiping     * _wiping = nullptr;

    int         wheelsCount;        // Число колес
    GearboxType gearboxType;        // Тип коробки передач
    double      engineCapacity;     // Объем двигателя
    bool        fogLights = false;  // Состояние противотуманных фар

    string      make;
    string      model;
    Color       color;


protected:
    CarType     type;
    FuelType    fuelType = FuelType::Diesel;      // Тип топлива

    void setWheelsCount(int wheelsCount){  wheelsCount = wheelsCount; }

public:

    Car(string make, string model, Color color): make(make), model(model), color(color){}

    void setRefuelingStation(Refueling *  refuelingStation) { _refueling = refuelingStation;}
    void setWiping(Wiping *  wiping) { _wiping = wiping;}

    int getWheelsCount() {   return wheelsCount; }

    // Заправить автомобиль
    void fuel() {  if (_refueling != nullptr)  _refueling->fuel(fuelType);  }

    // Помыть автомобиль
    void wip(){
        if (_wiping == nullptr) return;
        _wiping->wipMirrors();
        _wiping->wipWindshield();
        _wiping->wipHeadlights();
    }

    // Движение
    virtual void movement() = 0;

    // Обслуживание
    virtual void maintenance() = 0;

    // Переключение передач
    virtual bool gearShifting() = 0;

    // Включение фар
    virtual bool switchHeadlights() = 0;

    // Включение дворников
    virtual bool switchWipers() = 0;
};

class Harvester : public Car {

    bool fogLights = false;

public:
    using Car::setWheelsCount;
    using Car::fuelType;

    Harvester(const string &make, const string &model, Color color) : Car(make, model, color) { setWheelsCount(6); }

    bool switchFogLights() {
        fogLights = !fogLights;
        return fogLights;
    }

    void sweeping() { cout << "Автомобиль метет улицу." << endl; }

    virtual void movement() {}

    virtual void maintenance() {}

    virtual bool gearShifting() { return false; }

    virtual bool switchHeadlights() { return false; }

    virtual bool switchWipers() { return false; }
};



class SportCar : public Car {

public:
    using Car::setWheelsCount;
    using Car::fuelType;

    SportCar(const string &make, const string &model, Color color) : Car(make, model, color){
        setWheelsCount(3);
        fuelType = FuelType::Gasoline;
    }

    virtual void movement() {}
    virtual void maintenance() {}
    virtual bool gearShifting() {return false;}
    virtual bool switchHeadlights() { return false;}
    virtual bool switchWipers() { return false;}

};








#endif //LESSON3_CAR_HPP
