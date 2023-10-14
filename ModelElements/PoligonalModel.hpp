#ifndef LESSON1_POLIGONALMODEL_HPP
#define LESSON1_POLIGONALMODEL_HPP

#include <vector>
#include "Poligon.hpp"
#include "Texture.hpp"

using namespace std;

class PoligonalModel{
public:
    vector<Poligon> poligons;
    vector<Texture> textures;
};

#endif //LESSON1_POLIGONALMODEL_HPP

