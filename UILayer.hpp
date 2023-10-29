#ifndef LESSON5_UILAYER_HPP
#define LESSON5_UILAYER_HPP

#include <string>

using namespace std;

class UILayer {

        virtual void openProject(string fileName) = 0;
        virtual void showProjectSettings() = 0;
        virtual void saveProject() = 0;
        virtual void printAllModels() = 0;
        virtual void printAllTextures() = 0;
        virtual void renderAll() = 0;
        virtual void renderModel(int i) = 0;
};

#endif //LESSON5_UILAYER_HPP
