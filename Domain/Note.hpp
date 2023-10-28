#ifndef LESSON6_NOTE_HPP
#define LESSON6_NOTE_HPP

#include <string>
#include <ostream>

using namespace std;

class Note {

    int     _id;
    string  _title;
    string  _details;

public:
    Note(int id, string title, string details) : _id(id), _title(title), _details(details){}

    bool operator==(const Note &rhs) const {
        return _id == rhs._id;
    }

    bool operator!=(const Note &rhs) const {
        return !(rhs == *this);
    }

    friend ostream &operator<<(ostream &os, const Note &note) {
        os << "_id: " << note._id << " _title: " << note._title << " _details: " << note._details;
        return os;
    }

    int getId() { return _id;}

    void setTitle(string title) {_title = title;}
    string getTitle() { return _title; }

    void setDetails(string details) { _details = details;}
    string getDetails() { return _details;}

    string toString() { return _title + " " + _details; }
};


#endif //LESSON6_NOTE_HPP
