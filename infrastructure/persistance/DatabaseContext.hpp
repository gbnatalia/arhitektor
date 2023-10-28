#ifndef LESSON6_DATABASECONTEXT_HPP
#define LESSON6_DATABASECONTEXT_HPP

#include <list>
#include "../../Domain/Note.hpp"
#include "Database.hpp"
#include "../../database/NotesRecord.hpp"
#include "../../database/NotesDatabase.hpp"
#include "ModelBuilder.hpp"
#include "entityconfiguration/NoteConfiguration.hpp"
#include "DbContext.hpp"

using namespace std;

class DatabaseContext: public DbContext, public NotesDatabaseContext {

    Database * _db;

public:

    DatabaseContext(Database * db): DbContext(*db){_db = db;}

    virtual list<Note *> getAll() {
        list<Note*> notes;

        for (auto record : reinterpret_cast<NotesDatabase *>(_db)->getNotesTable().getRecords()) {
            notes.push_back(new Note(record->getId(), record->getTitle(), record->getDetails()));
         }

        return notes;
    }

    virtual void onModelCreating(ModelBuilder builder) {
        builder.applyConfiguration(reinterpret_cast<ModelConfiguration *>(new NoteConfiguration()));
    }

    virtual bool saveChanges(){
        return true;
    }
};

#endif //LESSON6_DATABASECONTEXT_HPP
