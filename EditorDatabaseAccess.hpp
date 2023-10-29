#ifndef LESSON5_EDITORDATABASEACCESS_HPP
#define LESSON5_EDITORDATABASEACCESS_HPP

#include <iostream>
#include <list>
#include <typeinfo>
#include "Entity.hpp"
#include "Database.hpp"
#include "Texture.hpp"
#include "Model3D.hpp"

using namespace std;

/**
 * Data Access Layer
 */
class EditorDatabaseAccess: public DatabaseAccess{
    Database * editorDatabase;

public:
    EditorDatabaseAccess(Database * editorDatabase): editorDatabase(editorDatabase){}

    /**
    * Добавить сущность в проект
    * @param entity
    */
    virtual void addEntity(Entity * entity) {
        editorDatabase->getAll().push_back(entity);
    }

    /**
    * Удалить сущность из проекта
    * @param entity
    */
    virtual void removeEntity(Entity * entity) {
        editorDatabase->getAll().remove(entity);
    }

    /**
    * Получить список всех текстур
    * @return
    */
    virtual list<Texture *> getAllTextures() {
        list<Texture *> models;
        for (Entity * entity: editorDatabase->getAll()) {
            cout << typeid(entity).name() << endl;
            if (typeid(entity).name()  == "Texture")
            {
                models.push_back((Texture *)entity);
            }
        }
        return models;
    }

    /**
    * Получить список всех моделей
    * @return
    */
    virtual list<Model3D *> getAllModels() {
        list<Model3D *> models;
        for (Entity * entity: editorDatabase->getAll()) {
            cout << typeid(entity).name() << endl;
            if (typeid(entity).name()  == "Model3D")
            {
                models.push_back((Model3D *)entity);
            }
        }
        return models;
    }
};


#endif //LESSON5_EDITORDATABASEACCESS_HPP
