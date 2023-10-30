#ifndef LESSON4_DATABASE_HPP
#define LESSON4_DATABASE_HPP

#include <list>
#include "Ticket.hpp"
#include "Customer.hpp"

using namespace std;


class Database {

    static int counter;
    list<Ticket> tickets;
    list<Customer> customers;

public:

    Database(){
        counter = 0;

        Ticket ticket1;
        Ticket ticket2;
        tickets.push_back(ticket1);
        tickets.push_back(ticket2);

        Customer customer[5];

        customer[0].getTickets().push_back(ticket1);
        customer[0].getTickets().push_back(ticket2);
        for (auto i = 0; i < 5; ++i)
            customers.push_back(customer[i]);
    }

    list<Ticket> getTickets() {return tickets;}

    list<Customer> getCustomers() {return customers;}

    // Получить актуальную стоимость билета
    double getTicketAmount(){  return 55;}

    // Получить идентификатор заявки на покупку билета
    int createTicketOrder(int clientId){return ++counter;}

};

#endif //LESSON4_DATABASE_HPP
