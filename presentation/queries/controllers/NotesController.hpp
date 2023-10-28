#ifndef LESSON6_NOTESCONTROLLER_HPP
#define LESSON6_NOTESCONTROLLER_HPP

#include "../../../application/interface/NoteEditor.hpp"
#include "Controller.hpp"

using namespace std;

class NotesController: public Controller {

    NoteEditor * _noteEditor;

public:
    NotesController(NoteEditor * noteEditor):Controller(){_noteEditor = noteEditor;}

    void routeGetAll(){_noteEditor->printAll();}

};

#endif //LESSON6_NOTESCONTROLLER_HPP
