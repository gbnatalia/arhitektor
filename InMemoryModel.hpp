#ifndef LESSON1_INMEMORYMODEL_HPP
#define LESSON1_INMEMORYMODEL_HPP

#include "ModelElements/PoligonalModel.hpp"
#include "ModelElements/Scene.hpp"
#include "ModelElements/Flash.hpp"
#include "ModelElements/Camera.hpp"
#include <list>

using namespace std;

class IModelChangedObserver{
public:
    virtual void ApplyUpdateModel() = 0;
};


class CustomService1 : public IModelChangedObserver{
public:
    virtual void ApplyUpdateModel(){
        cout << "ApplyUpdateModel_CustomService1" << endl;
    }
};

class CustomService2 : public IModelChangedObserver{
public:
    virtual void ApplyUpdateModel(){
        cout << "ApplyUpdateModel_CustomService2" << endl;
    }
};

class CustomService3 : public IModelChangedObserver{
public:
    virtual void ApplyUpdateModel(){
        cout << "ApplyUpdateModel_CustomService3" << endl;
    }
};


class IModelChanger{
public:
    virtual void notifyChange() = 0;
    virtual void registerModelChange(IModelChangedObserver* o) = 0;
    virtual void removeModelChanger(IModelChangedObserver* o) = 0;
};


class ModelStore : public IModelChanger{
    list<PoligonalModel>  _models;
    list<Scene>           _scenes;
    list<Camera>          _cameras;
    list<Flash>           _flashes;
    list<IModelChangedObserver *> changeObserver;

public:

    const list <PoligonalModel> &getModels() const {
        return _models;
    }

    void setModels(const list <PoligonalModel> &models) {
        _models = models;
    }

    const list <Camera> &getCameras() const {
        return _cameras;
    }

    void setCameras(const list <Camera> &cameras) {
        _cameras = cameras;
    }

    const list <Scene> &getScenes() const {
        return _scenes;
    }

    void setScenes(const list <Scene> &scenes) {
        _scenes = scenes;
    }

    const list <Flash> &getFlashes() const {
        return _flashes;
    }

    void setFlashes(const list <Flash> &flashes) {
        _flashes = flashes;
    }

    const list<IModelChangedObserver *> &getChangeObserver() const {
        return changeObserver;
    }

    void setChangeObserver(const list<IModelChangedObserver *> &changeObserver) {
        ModelStore::changeObserver = changeObserver;
    }

    Scene getScena(int num){
        list<Scene> lst = this->_scenes;
        for (int i = 0; i < num-1; i++)
            lst.pop_front();
        return lst.front();
    }

    virtual void registerModelChange(IModelChangedObserver * o){
        changeObserver.push_back(o);
    }

    virtual void removeModelChanger(IModelChangedObserver * o){
        return changeObserver.remove(o);
    }

    virtual void notifyChange(){

        for (auto observer : changeObserver)  {
            observer->ApplyUpdateModel();
        }
    }
};

#endif //LESSON1_INMEMORYMODEL_HPP

