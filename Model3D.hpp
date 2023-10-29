#ifndef LESSON5_MODEL3D_HPP
#define LESSON5_MODEL3D_HPP

#include <iostream>
#include <list>
#include <string>
#include <ostream>
#include "Texture.hpp"
#import "Entity.hpp"

using namespace std;

class Model3D: public Entity{
    int counter = 10000;
    int id;
    list<Texture *> _textures;

public:

    Model3D(){id = ++counter;}

    list<Texture *> getTextures() {
        return _textures;
    }

    int getId() {
        return id;
    }

    string toString() {
        return "3DModel #" + id;
    }

    friend ostream &operator<<(ostream &os, const Model3D &model) {
        os << "counter: " << model.counter << " id: " << model.id;
        return os;
    }

};


#endif //LESSON5_MODEL3D_HPP
