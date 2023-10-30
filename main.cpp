#include <iostream>
#include "Core.hpp"
#include "MobilApp.hpp"
#include "BusStation.hpp"


using namespace std;

int main() {
    Core core;
    MobileApp mobileApp{core.getTicketProvider(), *core.getCustomerProvider()};
    BusStation busStation{core.getTicketProvider()};

    if (mobileApp.buyTicket("1000000000000099")){
       time_t now = time(0);
        mobileApp.searchTicket(now);
    }

    return 0;
}
