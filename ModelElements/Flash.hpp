#ifndef LESSON1_FLASH_HPP
#define LESSON1_FLASH_HPP

#include <ostream>
#include "../Objects3D/Angle3D.hpp"
#include "../Objects3D/Color.hpp"
#include "../Objects3D/Point3D.hpp"

class Flash {

    Point3D _location;
    Angle3D _angle;
    Color   _color;
    float   _power;

public:

    Flash(Point3D location, Angle3D angle, Color color, float power) :
            _location(location), _angle(angle), _color(color), _power(power) {}

    const Point3D &getLocation() const {
        return _location;
    }

    void setLocation(const Point3D &location) {
        _location = location;
    }

    const Angle3D &getAngle() const {
        return _angle;
    }

    void setAngle(const Angle3D &angle) {
        _angle = angle;
    }

    const Color &getColor() const {
        return _color;
    }

    void setColor(const Color &color) {
        _color = color;
    }

    float getPower() const {
        return _power;
    }

    void setPower(float power) {
        _power = power;
    }


    void Rotate(Angle3D angle){
        cout << "flash rotate" << endl;
    }

    void Move(Angle3D angle){
        cout << "flash move" << endl;
    }

    friend ostream &operator<<(ostream &os, const Flash &flash) {
        os << "_location: " << flash._location << " _angle: " << flash._angle << " _color: " << flash._color
           << " _power: " << flash._power;
        return os;
    }

};

#endif //LESSON1_FLASH_HPP
