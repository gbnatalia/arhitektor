#ifndef LESSON6_NOTESRECORD_HPP
#define LESSON6_NOTESRECORD_HPP

#include <string>

using namespace std;

class NotesRecord {

    int         counter = 10000;
    int         _id;
    string      _title;
    string      _details;

public:
    NotesRecord(string title, string details) :_title(title), _details(details){ _id = ++counter;}

    int getId() {return _id;}

    void setTitle(string title) {_title = title;}
    string getTitle() {return _title;}

    void setDetails(string details) {_details = details;}
    string getDetails() {return _details;}
};

#endif //LESSON6_NOTESRECORD_HPP
