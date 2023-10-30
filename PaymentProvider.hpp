#ifndef LESSON4_PAYMENTPROVIDER_HPP
#define LESSON4_PAYMENTPROVIDER_HPP
#include <string>

using namespace std;

class PaymentProvider {

public:
    bool buyTicket(int orderId, string cardNo, double amount){
        // Посылаем запрос на формирование заявки на проведение платежа в процессинговую компанию (ProcessingCompany)
        return true;
    }
};

#endif //LESSON4_PAYMENTPROVIDER_HPP
