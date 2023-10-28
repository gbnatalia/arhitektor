#ifndef LESSON6_CONCRETENOTEEDITOR_HPP
#define LESSON6_CONCRETENOTEEDITOR_HPP

#include "interface/NoteEditor.hpp"
#include "interface/NotesDatabaseContext.hpp"
#include "interface/NotesPresenter.hpp"
#include "../Domain/Note.hpp"

using namespace std;

class ConcreteNoteEditor: public NoteEditor {

    NotesDatabaseContext * dbContext;
    NotesPresenter * presenter;

public:

    ConcreteNoteEditor( NotesPresenter * presenter, NotesDatabaseContext * dbContext):
                            dbContext(dbContext), presenter(presenter){}

    virtual bool add(Note item) {
        dbContext->getAll().push_back(&item);
        return dbContext->saveChanges();
    }

    virtual bool edit(Note item) {
        return false;
    }

    virtual bool remove(Note item) {
        list<Note *> lst = dbContext->getAll();
        remove_if(lst.begin(), lst.end(), [&](Note* n) {return *n == item;});
        return dbContext->saveChanges();
    }

    virtual Note * getById(int integer) {
        return nullptr;
    }

    virtual list<Note*> getAll() {
        return dbContext->getAll();
    }

    virtual void printAll() {
        presenter->printAll(getAll());
    }
};


#endif //LESSON6_CONCRETENOTEEDITOR_HPP
