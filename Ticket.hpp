#ifndef LESSON4_TICKET_HPP
#define LESSON4_TICKET_HPP
#include <string>
#include <ctime>
#include <list>
#include "Database.hpp"

using namespace std;

class Ticket {

    int         _id = 0;
    int         _customerId;
    time_t      _date;
    string      _qrcode;
    bool        _enable = true;
    int         _amount;

public:

    explicit Ticket(int id, int customerId, string qrcode, int amount) :
            _customerId(customerId), _id(id), _qrcode(qrcode), _amount(amount), _date(time(0)){}

    int getId() {return _id;}
    string getQrcode() { return _qrcode;}
    int getCustomerId() {return _customerId;}
    time_t getDate() {return _date;}

    void setEnable(bool enable) {_enable = enable;}
    bool isEnable() {return _enable; }
};

#endif //LESSON4_TICKET_HPP
