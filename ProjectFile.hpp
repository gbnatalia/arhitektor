#ifndef LESSON5_PROJECTFILE_HPP
#define LESSON5_PROJECTFILE_HPP

#include <string>

using namespace std;

class ProjectFile {
    string  fileName;
    int     setting1;
    string  setting2;
    bool    setting3;

public:
    ProjectFile(string fileName):fileName(fileName){
        // Загрузка настроек проекта, получаем объектное представление
        setting1 = 1;
        setting2 = "..";
        setting3 = false;
    }
    int    getSetting1() {return setting1;}
    string getSetting2() {return setting2;}
    bool   getSetting3() {return setting3;}
    string getFileName() {return fileName;}
};

#endif //LESSON5_PROJECTFILE_HPP
