cmake_minimum_required(VERSION 3.26)
project(lesson6)

set(CMAKE_CXX_STANDARD 17)

add_executable(lesson6 main.cpp
        application/interface/Editor.hpp
        application/interface/NoteEditor.hpp
        application/interface/NotesDatabaseContext.hpp
        application/interface/NotesPresenter.hpp
        application/ConcreteNoteEditor.hpp
        Domain/Note.hpp
        database/NotesDatabase.hpp
        database/NotesRecord.hpp
        database/NotesTable.hpp
        infrastructure/persistance/Database.hpp
        infrastructure/persistance/entityconfiguration/NoteConfiguration.hpp
        infrastructure/persistance/DatabaseContext.hpp
        infrastructure/persistance/DbContext.hpp
        infrastructure/persistance/ModelBuilder.hpp
        infrastructure/persistance/ModelConfiguration.hpp
        presentation/queries/controllers/Controller.hpp
        presentation/queries/controllers/NotesController.hpp
        presentation/queries/views/NotesConsolePresenter.hpp
        presentation/queries/views/Presenter.hpp)
