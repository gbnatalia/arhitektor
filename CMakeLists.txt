cmake_minimum_required(VERSION 3.26)
project(lesson1)

set(CMAKE_CXX_STANDARD 11)

add_executable(lesson1 main.cpp
        Objects3D/Angle3D.hpp
        Objects3D/Color.hpp
        Objects3D/Point3D.hpp
        ModelElements/Camera.hpp
        InMemoryModel.hpp
        ModelElements/Flash.hpp
        ModelElements/Poligon.hpp
        ModelElements/Texture.hpp
        ModelElements/PoligonalModel.hpp
        ModelElements/Scene.hpp)
