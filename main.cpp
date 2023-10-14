#include <iostream>
#include "InMemoryModel.hpp"

using namespace std;

list<PoligonalModel> getListPoligonalModel(){
    PoligonalModel m1;
    PoligonalModel m2;
    list<PoligonalModel> lmodel;
    lmodel.push_back(m1);
    lmodel.push_back(m2);
    return lmodel;
}

list<Point3D> getListPoint3D(){
    Point3D p1{0,0,0};
    Point3D p2{1,1,1};
    list<Point3D> lp;
    lp.push_back(p1);
    lp.push_back(p2);
    return lp;
}

list<Angle3D> getListAngle3D(){
    Angle3D p1{0,0,0};
    Angle3D p2{1,1,1};
    list<Angle3D> va;
    va.push_back(p1);
    va.push_back(p2);
    return va;
}

void testCamera(){
    cout << "testCamera" << endl;
    Point3D p1{0,1,2};
    Angle3D a1{1,2,3};
    Camera cam{p1,a1};
    cout << cam << endl;
    cam.Rotate(a1);
    cam.Move(a1);
}

void testFlash(){
    cout << "testFlash" << endl;
    Point3D p1{0,1,2};
    Angle3D a1{1,2,3};
    Color color{"red"};
    float power = 2.5;
    Flash fl1{p1,a1,color, power};
    cout << fl1 << endl;
    fl1.Rotate(a1);
    fl1.Move(a1);
}


void testPoligon(){
    cout << "testPoligon" << endl;
    Texture t1{"texture1"};
    Poligon p1{getListPoint3D()};
    for (auto p : p1.getPoints())
        cout << p << endl;
}

void testScene(){
    cout << "testScene" << endl;
    list<PoligonalModel> lmodel = getListPoligonalModel();
    Point3D p1{0,1,2};
    Angle3D a1{1,2,3};
    Color color{"red"};
    float power = 2.5;
    Flash fl1{p1,a1,color, power};
    Flash fl2{p1,a1,color, power};
    list<Flash> flashes;
    flashes.push_back(fl1);
    flashes.push_back(fl2);
    Scene sc{0, lmodel, flashes};
    sc.method2(0, 0);

}


int main() {
    CustomService1 observer1;
    CustomService2 observer2;
    CustomService3 observer3;

    ModelStore modelStore;
    modelStore.registerModelChange(&observer1);
    modelStore.registerModelChange(&observer2);
    modelStore.registerModelChange(&observer3);

    modelStore.notifyChange();

    testCamera();
    testFlash();
    testPoligon();
    testScene();

    return 0;
}

