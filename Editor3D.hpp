#ifndef LESSON5_EDITOR3D_HPP
#define LESSON5_EDITOR3D_HPP

#include <iostream>
#include <chrono>
#include <string>
#include "UILayer.hpp"
#include "ProjectFile.hpp"
#include "BusinessLogicalLayer.hpp"
#include "DatabaseAccess.hpp"
#include "Database.hpp"
#include "MyException.hpp"
#include "EditorDatabase.hpp"
#include "EditorDatabaseAccess.hpp"
#include "EditorBusinessLogicalLayer.hpp"

using namespace std;
using namespace std::chrono;

class Editor3D : public UILayer {

    ProjectFile *projectFile = nullptr;
    BusinessLogicalLayer *businessLogicalLayer = nullptr;
    DatabaseAccess *databaseAccess = nullptr;
    Database *database = nullptr;

    void checkProjectFile() {
        string err_message = "Файл проекта не определен.";
        if (projectFile == nullptr)
            throw MyException(err_message);
    }

    /**
    * Полностью пересобираем внутренние компоненты системы (новый проект)
    */
    void initialize() {
        database = (Database *) new EditorDatabase(*projectFile);
        //databaseAccess = (DatabaseAccess *) new EditorDatabaseAccess(*database);
        businessLogicalLayer = (BusinessLogicalLayer *) new EditorBusinessLogicalLayer(new EditorDatabaseAccess(database));
    }

public:


    virtual void openProject(string fileName) {
        projectFile = new ProjectFile(fileName);
        initialize();
    }

    virtual void saveProject() {
        cout << "Save change success!" << endl;
         database->save();
    }

    virtual void showProjectSettings() {
        // Предусловие
        checkProjectFile();

        cout << "*** Project v1 ***" << endl;
        cout << "******************" << endl;
        cout << "fileName: " << projectFile->getFileName()  << endl;
        cout << "setting1: " << projectFile->getSetting1() << endl;
        cout << "setting2: " << projectFile->getSetting2() << endl;
        cout << "setting3: " << projectFile->getSetting3() << endl;
        cout << "******************" << endl;
    }

    virtual void printAllModels() {
        // Предусловие
        checkProjectFile();

        list<Model3D *> models = businessLogicalLayer->getAllModels();
        for (int i = 0; i < models.size(); i++) {
            auto el = models.begin();
            advance(el, i);
            cout << "=== " << i  << " ==="<< endl;
            cout << *el << endl;

            for (Texture * texture: (*el)->getTextures()) {
                cout << *texture << endl;
            }

        }
    }

    virtual void printAllTextures() {
        // Предусловие
        checkProjectFile();

        list<Texture *> textures = (list<Texture *>)businessLogicalLayer->getAllTextures();
        for (int i = 0; i < textures.size(); i++) {
            auto el = textures.begin();
            advance(el, i);
            cout << "=== " << i << " ===" << endl;
            cout << *el << endl;
        }
    }

    virtual void renderAll() {
        // Предусловие
        checkProjectFile();

        cout << "Wait ..." << endl;

        uint64_t startTime = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
        //businessLogicalLayer->renderAllModels();
        uint64_t endTime = (duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count() - startTime);
        cout << "Time operations " << endTime << " ms" << endl;
    }

    virtual void renderModel(int i) {
        // Предусловие
        checkProjectFile();

        list < Model3D * > models = (list < Model3D * > )
        businessLogicalLayer->getAllModels();
        if (i < 0 || i > models.size() - 1)
            throw new MyException("Error Model number.");
        cout << "Wait ..." << endl;
        uint64_t startTime = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
        auto el = models.begin();
        advance(el, i);
        //businessLogicalLayer->renderModel(*el);
        uint64_t endTime = (duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count() - startTime);
        cout << "operations " << endTime << " ms" << endl;
    }

};

#endif //LESSON5_EDITOR3D_HPP
