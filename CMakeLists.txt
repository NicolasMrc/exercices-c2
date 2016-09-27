cmake_minimum_required(VERSION 3.6)
project(tp2c__)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Voiture.cpp Voiture.h Etudiant.cpp Etudiant.h EtudiantEnMaitrise.cpp EtudiantEnMaitrise.h)
add_executable(tp2c__ ${SOURCE_FILES})