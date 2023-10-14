#ifndef LESSON1_SCENE_HPP
#define LESSON1_SCENE_HPP

#include <list>
#include "PoligonalModel.hpp"
#include "Flash.hpp"

#define Type int

using namespace std;

class Scene {
    int _id;
    list<PoligonalModel> _models;
    list<Flash> _flashes;

public:

    explicit Scene(int id, const list<PoligonalModel> &models, const list<Flash> &flashes) :
            _id(id), _models(models), _flashes(flashes) {}


    int getId() const {
        return _id;
    }

    void setId(int id) {
        _id = id;
    }

    const list<PoligonalModel> &getModels() const {
        return _models;
    }

    void setModels(const list<PoligonalModel> &models) {
        _models = models;
    }

    const list<Flash> &getFlashes() const {
        return _flashes;
    }

    void setFlashes(const list<Flash> &flashes) {
        _flashes = flashes;
    }


    Type method1(Type) { cout << "id=" << _id << " method1" << endl; }

    Type method2(Type, Type) { cout << "id=" << _id << " method2" << endl; }


};

#endif //LESSON1_SCENE_HPP

