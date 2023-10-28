#ifndef LESSON6_NOTESDATABASE_HPP
#define LESSON6_NOTESDATABASE_HPP

#include "NotesTable.hpp"
#include "../infrastructure/persistance/Database.hpp"

class NotesDatabase: public Database {

    NotesTable _notesTable;

public:
    NotesTable getNotesTable() { return _notesTable;}
};


#endif //LESSON6_NOTESDATABASE_HPP
