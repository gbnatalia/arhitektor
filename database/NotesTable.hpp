#ifndef LESSON6_NOTESTABLE_HPP
#define LESSON6_NOTESTABLE_HPP

#include <stdlib.h>
#include <list>
#include "NotesRecord.hpp"

using namespace std;

class NotesTable {

    list<NotesRecord *> _records;

public:

    void prepareRecords(){
        int recordCount = rand();
        for (int i = 0; i < recordCount; i++){
            _records.push_back(new NotesRecord("title #" + (i + 1), "details #" + (i + 1)));
        }
    }

    list<NotesRecord *> getRecords() {
        prepareRecords();
        return _records;
    }

};

#endif //LESSON6_NOTESTABLE_HPP
