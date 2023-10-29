#ifndef LESSON5_EDITORBUSINESSLOGICALLAYER_HPP
#define LESSON5_EDITORBUSINESSLOGICALLAYER_HPP

#include <list>
#include <chrono>
#include <thread>
#include "DatabaseAccess.hpp"
#include "Model3D.hpp"

using namespace std;

class EditorBusinessLogicalLayer : public BusinessLogicalLayer {

    DatabaseAccess * databaseAccess;

    void processRender(Model3D model){
        try {
            chrono::milliseconds timespan(2500 - rand()%2000); // or whatever
            this_thread::sleep_for(timespan);
        }
        catch (...){}
    }

public:

    EditorBusinessLogicalLayer(DatabaseAccess * databaseAccess): databaseAccess(databaseAccess){}

    virtual list<Model3D *> getAllModels() { return databaseAccess->getAllModels();}

    virtual list<Texture *> getAllTextures() {
        return databaseAccess->getAllTextures();
    }

    virtual void renderModel(Model3D * model) {
        processRender(*model);
    }

    virtual void renderAllModels() {
        for (Model3D * model: getAllModels()) {
            processRender(*model);
        }
    }

};

#endif //LESSON5_EDITORBUSINESSLOGICALLAYER_HPP
