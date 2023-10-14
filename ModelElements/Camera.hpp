#ifndef LESSON1_CAMERA_HPP
#define LESSON1_CAMERA_HPP

#include <ostream>
#include "../Objects3D/Angle3D.hpp"
#include "../Objects3D/Point3D.hpp"


class Camera {

    Point3D _location;
    Angle3D _angle;

public:

    Camera(Point3D location, Angle3D angle) : _location(location), _angle(angle) {}

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


    void Rotate(Angle3D angle){
        cout << "camera rotate" << endl;
    }

    void Move(Angle3D angle){
        cout << "camera move" << endl;
    }

    friend ostream &operator<<(ostream &os, const Camera &camera) {
        os << "_location: " << camera._location << " _angle: " << camera._angle;
        return os;
    }
};

#endif //LESSON1_CAMERA_HPP
