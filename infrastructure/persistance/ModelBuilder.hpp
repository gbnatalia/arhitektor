#ifndef LESSON6_MODELBUILDER_HPP
#define LESSON6_MODELBUILDER_HPP

#include "ModelConfiguration.hpp"

using namespace std;

class ModelBuilder{

public:

    ModelBuilder * applyConfiguration(ModelConfiguration * modelConfiguration){
        return this;
    }

};

#endif //LESSON6_MODELBUILDER_HPP
