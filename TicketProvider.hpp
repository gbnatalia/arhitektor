#ifndef LESSON4_TICKETPROVIDER_HPP
#define LESSON4_TICKETPROVIDER_HPP

#include <string>
#include <ctime>
#include <list>
#include "Database.hpp"
#include "PaymentProvider.hpp"


using namespace std;

class TicketProvider {
    Database database;
    PaymentProvider paymentProvider;

public:
    TicketProvider(Database database, PaymentProvider paymentProvider){
        database = database;
        paymentProvider = paymentProvider;
    }

    list<Ticket> searchTicket(int clientId, time_t date){
        list<Ticket> tickets;
        for (Ticket ticket: database.getTickets()) {
            if (ticket.getCustomerId() == clientId && (ticket.getDate() == date))
                tickets.push_back(ticket);
        }
        return tickets;
    }

    bool buyTicket(int clientId, string cardNo){
        int orderId = database.createTicketOrder(clientId);
        double amount = database.getTicketAmount();
        return paymentProvider.buyTicket(orderId,  cardNo, amount);
    }

    bool checkTicket(string qrcode){
        for (Ticket ticket: database.getTickets()) {
            if (ticket.getQrcode() == (qrcode)){
                ticket.setEnable(false);
                // Save database ...
                return true;
            }
        }
        return false;
    }
};

#endif //LESSON4_TICKETPROVIDER_HPP
