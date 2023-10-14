#ifndef LESSON1_ANGLE3D_HPP
#define LESSON1_ANGLE3D_HPP

#include <ostream>

class Angle3D {

    double x;
    double y;
    double z;

public:

    explicit Angle3D(double x, double y, double z) : x(x), y(y), z(z) {}


    double getX() const {
        return x;
    }

    void setX(double x) {
        Angle3D::x = x;
    }

    double getY() const {
        return y;
    }

    void setY(double y) {
        Angle3D::y = y;
    }

    double getZ() const {
        return z;
    }

    void setZ(double z) {
        Angle3D::z = z;
    }

    bool operator==(const Angle3D &rhs) const {
        return x == rhs.x &&
               y == rhs.y &&
               z == rhs.z;
    }

    bool operator!=(const Angle3D &rhs) const {
        return !(rhs == *this);
    }

    friend ostream &operator<<(ostream &os, const Angle3D &d) {
        os << "x: " << d.x << " y: " << d.y << " z: " << d.z;
        return os;
    }

};

#endif //LESSON1_ANGLE3D_HPP
