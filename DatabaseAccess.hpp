#ifndef LESSON5_DATABASEACCESS_HPP
#define LESSON5_DATABASEACCESS_HPP

#include "Texture.hpp"
#include "Model3D.hpp"

/**
 * Интерфейс Data Access Layer
 */
class DatabaseAccess {
public:
        virtual void addEntity(Entity * entity) = 0;
        virtual void removeEntity(Entity * entity) = 0;
        virtual list<Texture *> getAllTextures() = 0;
        virtual list<Model3D *> getAllModels() = 0;

};


#endif //LESSON5_DATABASEACCESS_HPP
