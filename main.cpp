#include <iostream>
#include "Editor3D.hpp"

using namespace std;

int main() {

    Editor3D *editor3D = new Editor3D();

    bool f = true;
    while (f) {
        cout << "*** MY 3D EDITOR ***" << endl;
        cout << "=======================" << endl;
        cout << "1. Open project" << endl;
        cout << "2. Save project" << endl;
        cout << "3. Show params project" << endl;
        cout << "4. Show models project" << endl;
        cout << "5. Show textures project" << endl;
        cout << "6. Run render all models" << endl;
        cout << "7. Run render model" << endl;
        cout << "0. Exit" << endl;
        cout << "Please, select actions: " << endl;

        try {
            int no;
            cin >> no;

            switch (no) {

                case 0: {
                    cout << "0. Exit" << endl;
                    f = false;
                    break;
                }

                case 1: {
                    string fileName;
                    cout << "Select name project file: ";
                    cin >> fileName;
                    editor3D->openProject(fileName);
                    cout << "Project open!" << endl;
                    break;
                }

                case 2: {
                    editor3D->saveProject();
                    break;
                }

                case 3: {
                    editor3D->showProjectSettings();
                    break;
                }

                case 4: {
                    editor3D->printAllModels();
                    break;
                }

                case 5: {
                    editor3D->printAllTextures();
                    break;
                }

                case 6: {
                    editor3D->renderAll();
                    break;
                }

                case 7: {
                    int modelNo;
                    cout << "Select model number: " << endl;
                    cin >> modelNo;
                    editor3D->renderModel(modelNo);
                    break;
                }

                default: {
                    cout << "Number menu no correct" << endl;
                }
            }
        }
        catch (exception e) {
            e.what();
        }
    }
    return 0;
}

