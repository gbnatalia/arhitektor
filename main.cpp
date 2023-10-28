
#include <iostream>
#include "infrastructure/persistance/Database.hpp"
#include "database/NotesDatabase.hpp"
#include "application/interface/NotesDatabaseContext.hpp"
#include "infrastructure/persistance/DatabaseContext.hpp"
#include "application/interface/NoteEditor.hpp"
#include "application/ConcreteNoteEditor.hpp"
#include "presentation/queries/views/NotesConsolePresenter.hpp"
#include "presentation/queries/controllers/NotesController.hpp"
using namespace std;

int main() {

    Database* database = new NotesDatabase();
    NotesDatabaseContext *context;
    context = new DatabaseContext(database);
    NoteEditor * noteEditor = new ConcreteNoteEditor(new NotesConsolePresenter, context);
    for (int i = 0; i < 5; ++i) {
        Note *n = new Note(i, "note " + i, "details note " + i);
        noteEditor->add(*n);
    }
    NotesController * notesController = new NotesController(noteEditor);
    notesController->routeGetAll();


    return 0;
}
