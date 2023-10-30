#ifndef LESSON4_BUSSTATION_H
#define LESSON4_BUSSTATION_H

#include "TicketProvider.hpp"

using namespace std;

// автобусная станция
class BusStation {

    TicketProvider _ticketProvider;

public:

    BusStation(const TicketProvider& ticketProvider): _ticketProvider(ticketProvider){}

    bool checkTicket(string qrCode){ return _ticketProvider.checkTicket(qrCode); }

};


#endif //LESSON4_BUSSTATION_H
