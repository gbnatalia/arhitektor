#ifndef LESSON4_MOBILAPP_HPP
#define LESSON4_MOBILAPP_HPP
#include <ctime>
#include <list>
#include "CustomerProvider.hpp"
#include "TicketProvider.hpp"

using namespace std;

class MobileApp {

    Customer        _customer;
    TicketProvider  _ticketProvider;

public:

    explicit MobileApp(const TicketProvider &ticketProvider, CustomerProvider& customerProvider) :
        _ticketProvider(ticketProvider), _customer(customerProvider.getCustomer("login", "password")) {}

    list<Ticket> getTickets(){
        return _customer.getTickets();
    }

    void searchTicket(time_t date){
        _customer.setTickets(_ticketProvider.searchTicket(_customer.getId(), date));
    }

    bool buyTicket(string cardNo){
        return _ticketProvider.buyTicket(_customer.getId(), cardNo);
    }
};


#endif //LESSON4_MOBILAPP_HPP

