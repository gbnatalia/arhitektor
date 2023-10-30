#ifndef LESSON4_CUSTOMER_HPP
#define LESSON4_CUSTOMER_HPP

#include <string>
#include <list>
#include "Ticket.hpp"

using namespace std;

class Customer {

    static int counter;
    int id = 0;
    list<Ticket> _tickets;

public:

    explicit Customer() { id++; }

    list<Ticket> getTickets() { return _tickets;}
    void setTickets(list<Ticket> tickets) {_tickets = tickets;}

    int getId() {return id;}

};

#endif //LESSON4_CUSTOMER_HPP
