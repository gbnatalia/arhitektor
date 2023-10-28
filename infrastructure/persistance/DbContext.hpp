#ifndef LESSON6_DBCONTEXT_HPP
#define LESSON6_DBCONTEXT_HPP

#include "Database.hpp"
#include "ModelBuilder.hpp"

using namespace std;

class DbContext {

protected:
    Database _database;

public:
    DbContext(Database database): _database(database){}

    virtual void onModelCreating(ModelBuilder builder) = 0;

    bool saveChanges(){
        //TODO: Сохранение изменений в базе данных
        return true;
    }
};

#endif //LESSON6_DBCONTEXT_HPP
