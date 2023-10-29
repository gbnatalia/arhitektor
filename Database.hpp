#ifndef LESSON5_DATABASE_HPP
#define LESSON5_DATABASE_HPP
#include <list>
#include "Entity.hpp"

using namespace std;

/**
 * Интерфейс БД
 */
class Database {

public:
        virtual void load() = 0;
        virtual void save() = 0;
        virtual list<Entity *> getAll() = 0;

};


#endif //LESSON5_DATABASE_HPP
