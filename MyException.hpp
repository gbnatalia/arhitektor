#ifndef LESSON5_MYEXCEPTION_HPP
#define LESSON5_MYEXCEPTION_HPP

#include <string>

using namespace std;

class MyException: public exception {
    string message;    // сообщение об ошибке

    public:
    MyException(const string& message): message{message} {}

    const char* what() const noexcept override
    {
            return message.c_str();     // получаем из std::string строку const char*
    }
};


#endif //LESSON5_MYEXCEPTION_HPP
