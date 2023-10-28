#ifndef LESSON6_NOTESCONSOLEPRESENTER_HPP
#define LESSON6_NOTESCONSOLEPRESENTER_HPP

#include <iostream>
#include <list>
#include "../../../Domain/Note.hpp"

using namespace std;

class NotesConsolePresenter: public NotesPresenter {

public:
    NotesConsolePresenter(){}

    virtual void printAll(list<Note *> notes) {
        for (auto note : notes){
            cout << *note << endl;
        }
    }

};


#endif //LESSON6_NOTESCONSOLEPRESENTER_HPP
