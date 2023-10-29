#ifndef LESSON5_TEXTURE_HPP
#define LESSON5_TEXTURE_HPP

#include <string>
#include <ostream>
#include "Entity.hpp"

using namespace std;

class Texture : public Entity{
    int counter = 50000;
    int id;

public:
    Texture(){id = ++counter;}

    int getId() { return id; }

    string toString() {  return "Texture # " + id;}

    friend ostream &operator<<(ostream &os, const Texture &texture) {
        os << "counter: " << texture.counter << " id: " << texture.id;
        return os;
    }
};

#endif //LESSON5_TEXTURE_HPP
