#ifndef LESSON2_SINGLETON_H
#define LESSON2_SINGLETON_H

class Singleton
{
    static Singleton * instance;

    // скрытие конструктора по умолчанию
    Singleton(){}

public:

    // запрет конструктора копирования и оператора копирования
    Singleton(Singleton& other) = delete;
    void operator=(const Singleton &) = delete;

    static Singleton * GetInstance() {
        if (instance == nullptr)
            instance = new Singleton();
        return instance;
    }

    // какая то логика
};

Singleton* Singleton::instance = nullptr;

#endif //LESSON2_SINGLETON_H
