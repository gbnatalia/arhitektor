cmake_minimum_required(VERSION 3.23)
project(lesson5)

set(CMAKE_CXX_STANDARD 14)

add_executable(lesson5 main.cpp
        BusinessLogicalLayer.hpp
        Database.hpp
        DatabaseAccess.hpp
        Editor3D.hpp
        EditorBusinessLogicalLayer.hpp
        EditorDatabase.hpp
        EditorDatabaseAccess.hpp
        Entity.hpp
        Model3D.hpp
        ProjectFile.hpp
        Texture.hpp
        UILayer.hpp
        MyException.hpp)
