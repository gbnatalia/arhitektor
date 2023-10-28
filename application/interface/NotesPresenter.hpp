#ifndef LESSON6_NOTESPRESENTER_HPP
#define LESSON6_NOTESPRESENTER_HPP
#include <list>
#include "../../Domain/Note.hpp"

using namespace std;

class NotesPresenter {

public:
        virtual void printAll(list<Note *> notes) = 0;
};


#endif //LESSON6_NOTESPRESENTER_HPP
