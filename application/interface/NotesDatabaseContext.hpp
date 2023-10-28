#ifndef LESSON6_NOTESDATABASECONTEXT_HPP
#define LESSON6_NOTESDATABASECONTEXT_HPP
#include <list>
#include "../../Domain/Note.hpp"

using namespace std;

class NotesDatabaseContext {

public:
        virtual list<Note *> getAll() = 0;

        virtual bool saveChanges() = 0;
};

#endif //LESSON6_NOTESDATABASECONTEXT_HPP
