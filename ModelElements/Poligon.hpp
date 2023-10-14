#ifndef LESSON1_POLIGON_HPP
#define LESSON1_POLIGON_HPP

#include <list>
#include <ostream>
#include "Texture.hpp"
#include "../Objects3D/Point3D.hpp"
#include "../Objects3D/Angle3D.hpp"

using namespace std;


class Poligon{

    list<Point3D> _points;
    list<Texture> _textures;

public:

    Poligon(list<Point3D> points):_points(points){}
    Poligon(list<Point3D> points, list<Texture> textures): _points(points), _textures(textures){}


    list<Point3D> getPoints(){
        return _points;
    }

    void appendTexture(Texture texture){
        _textures.push_back(texture);
    }

    void setTextures(list<Texture> textures){
        _textures = textures;
    }

    list<Texture> getTextures(){
        return _textures;
    }

};

#endif //LESSON1_POLIGON_HPP

