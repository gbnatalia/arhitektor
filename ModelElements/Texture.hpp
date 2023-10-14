#ifndef LESSON1_TEXTURE_HPP
#define LESSON1_TEXTURE_HPP

#include <string>

using namespace std;

class Texture {
    string name;

public:

    Texture(string name):name(name){}

    string getName() { return  name; }

};

#endif //LESSON1_TEXTURE_HPP

