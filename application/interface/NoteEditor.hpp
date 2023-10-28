#ifndef LESSON6_NOTEEDITOR_HPP
#define LESSON6_NOTEEDITOR_HPP

#include <list>
#include <algorithm>
#include "../../Domain/Note.hpp"
#include "Editor.hpp"

using namespace std;

class NoteEditor: public Editor { //: public Editor<Note, int>{

    list<Note *> _notes;

public:
    void printAll() {
        for (auto note : _notes){
            cout << *note << endl;
        }
    };

    virtual bool add(Note item) {
        _notes.push_back(&item);
        return true;
    }

    virtual bool edit(Note item) {
        return true;
    }

    virtual bool remove(Note item) {
        auto it = remove_if(_notes.begin(), _notes.end(),
                            [&](Note * n) { return *n == item; });
        return true;
    }

    virtual Note * getById(int id) {
        return *find_if(_notes.begin(), _notes.end(), [&](Note * n){return n->getId() == id;});
    }


    virtual list<Note *> getAll() { return _notes; }

};

#endif //LESSON6_NOTEEDITOR_HPP
