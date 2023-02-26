cmake_minimum_required(VERSION 3.4...3.20 FATAL_ERROR)

set(PROJECT_NAME IndustrialProgrammingTechnologies)
project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} 
    src/main.cpp
	src/Practice_2/Circle.cpp
	src/Practice_2/Figure.cpp
	src/Practice_2/Triangle.cpp
	src/Practice_2/Circle.h
	src/Practice_2/Figure.h
	src/Practice_2/Triangle.h
)