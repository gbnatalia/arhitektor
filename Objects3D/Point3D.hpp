#ifndef LESSON1_POINT3D_HPP
#define LESSON1_POINT3D_HPP

#include <ostream>

class Point3D {

    double x;
    double y;
    double z;

public:

    explicit Point3D(double x, double y, double z) : x(x), y(y), z(z) {}


    double getX() const {
        return x;
    }

    void setX(double x) {
        Point3D::x = x;
    }

    double getY() const {
        return y;
    }

    void setY(double y) {
        Point3D::y = y;
    }

    double getZ() const {
        return z;
    }

    void setZ(double z) {
        Point3D::z = z;
    }

    friend ostream &operator<<(ostream &os, const Point3D &d) {
        os << "x: " << d.x << " y: " << d.y << " z: " << d.z;
        return os;
    }
};

#endif //LESSON1_POINT3D_HPP
