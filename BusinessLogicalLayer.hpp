#ifndef LESSON5_BUSINESSLOGICALLAYER_HPP
#define LESSON5_BUSINESSLOGICALLAYER_HPP
#include <list>
#include "Model3D.hpp"

using namespace std;

class BusinessLogicalLayer {

public:
        virtual list<Model3D *> getAllModels() = 0;
        virtual list<Texture *> getAllTextures() = 0;

        virtual void renderModel(Model3D * model) = 0;
        virtual void renderAllModels() = 0;

};

#endif //LESSON5_BUSINESSLOGICALLAYER_HPP
