cmake_minimum_required(VERSION 3.23)
project(lesson4)

set(CMAKE_CXX_STANDARD 17)

add_executable(lesson4 main.cpp
        Database.hpp
        Ticket.hpp
        Customer.hpp
        PaymentProvider.hpp
        TicketProvider.hpp
        CustomerProvider.hpp
        Core.hpp
        )
