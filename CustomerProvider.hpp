#ifndef LESSON4_CUSTOMERPROVIDER_HPP
#define LESSON4_CUSTOMERPROVIDER_HPP

#include <string>
#include <list>
#include "TicketProvider.hpp"
#include "Customer.hpp"
#include "Database.hpp"

using namespace std;


class CustomerProvider {
    Database _database;
    Customer * _customer;

public:
    CustomerProvider(Database database){_database = database;}

public:

    Customer getCustomer(string login, string password){
        return *_customer; // new Customer
        //return database.getCustomers().stream().findFirst().get();
    }

};

#endif //LESSON4_CUSTOMERPROVIDER_HPP
