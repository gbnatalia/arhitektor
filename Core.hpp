#ifndef LESSON4_CORE_HPP
#define LESSON4_CORE_HPP

#include "Database.hpp"
#include "TicketProvider.hpp"
#include "CustomerProvider.hpp"
#include "PaymentProvider.hpp"

class Core {

    PaymentProvider    paymentProvider;
    Database           database;
    TicketProvider   * ticketProvider;
    CustomerProvider * customerProvider;

public:

    explicit Core() {
        customerProvider = new CustomerProvider(database);
        ticketProvider   = new TicketProvider(database, paymentProvider);
    }

    /**
     * Внешний сервис
     * @return возвращает сервис по работе с билетами
     */
    TicketProvider getTicketProvider() { return *ticketProvider;}

    /**
     * Внешний сервис
     * @return возвращает сервис по работе с покупателями
     */
    CustomerProvider * getCustomerProvider() { return customerProvider; }
};

#endif //LESSON4_CORE_HPP
