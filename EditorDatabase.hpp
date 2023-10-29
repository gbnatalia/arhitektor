#ifndef LESSON5_EDITORDATABASE_HPP
#define LESSON5_EDITORDATABASE_HPP

#include <stdlib.h>
#include <string>
#include <list>
#import "ProjectFile.hpp"
#import "Database.hpp"
#import "Entity.hpp"
#import "Model3D.hpp"

using namespace std;

class EditorDatabase: public Database {
    ProjectFile projectFile;
    list<Entity *> entities;

    void generateModelAndTextures(){
        Model3D * model = new Model3D();
        int textureCount = rand() % 3;
        for (int i = 0; i < textureCount; i++){
            Texture * texture = generateTexture();
            model->getTextures().push_back(texture);
            entities.push_back((Entity *)texture);
        }
        entities.push_back(model);
    }

    Texture * generateTexture(){
        return new Texture();
    }

public:
    EditorDatabase(ProjectFile projectFile): projectFile(projectFile) { load();}

    virtual void load() {
        // Загрузка всех сущностей проекта (модели, текстуры)
    }

    virtual void save() {
        // Сохранение текущего состояния всех сущностей проекта
    }

    virtual list<Entity *> getAll() {
        // Ленивая загрузка
        if (entities.empty()){
            int modelsCount = 10 - rand()%6; // 5 - 10
            for (int i = 0; i < modelsCount; i++)
                generateModelAndTextures();
        }
        return entities;
    }
};


#endif //LESSON5_EDITORDATABASE_HPP
