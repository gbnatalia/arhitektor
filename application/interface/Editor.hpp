#ifndef LESSON6_EDITOR_HPP
#define LESSON6_EDITOR_HPP
#include <list>
#include <optional>

using namespace std;

//template <typename T, typename TId>
class Editor {

public:
       virtual bool add(Note item) = 0;

        virtual bool edit(Note item) = 0;

        virtual bool remove(Note item) = 0;

        virtual Note * getById(int id) = 0;

        virtual list<Note *> getAll() = 0;
};


#endif //LESSON6_EDITOR_HPP
