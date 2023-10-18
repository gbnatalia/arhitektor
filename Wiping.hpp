#ifndef LESSON3_WIPING_HPP
#define LESSON3_WIPING_HPP


#include <iostream>

using namespace std;

enum TypeOrerations{ type_wipMirrors = 1, type_wipWindshield = 2, type_wipHeadlights = 4};


// автомойка - базовый класс
class Wiping {
public:
    virtual void wipMirrors() = 0;      // протирка зеркал
    virtual void wipWindshield() = 0;   // протирка лобового стекла
    virtual void wipHeadlights() = 0;   // протирка фар
};

// автомойка - базовый класс
class Wiping1 : public Wiping {
public:

    virtual void wipMirrors() {cout << "протирка зеркал на автомойке 1" << endl;}
    virtual void wipWindshield(){cout << "протирка лобового стекла на автомойке 1" << endl;}
    virtual void wipHeadlights(){cout << "протирка фар на автомойке 1" << endl;}
};


// автомойка - базовый класс
class Wiping2 : public Wiping {
public:

    virtual void wipMirrors() {cout << "протирка зеркал на автомойке 2" << endl;}
    virtual void wipWindshield() {cout << "протирка лобового стекла на автомойке 2" << endl;}
    virtual void wipHeadlights(){cout << "протирка фар на автомойке 2" << endl;}
};


#endif //LESSON3_WIPING_HPP
