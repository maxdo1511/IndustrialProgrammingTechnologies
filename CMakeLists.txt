cmake_minimum_required(VERSION 3.4...3.20 FATAL_ERROR)

set(PROJECT_NAME IndustrialProgrammingTechnologies)
project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} 
    src/main.cpp
	src/Practice_3/tack_1/eq2.cpp
	src/Practice_3/tack_1/eq2.h
	src/Practice_3/tack_1/main.cpp
	src/Practice_3/tack_2/rational.cpp
	src/Practice_3/tack_2/rational.h
	src/Practice_3/tack_2/main.cpp
	src/Practice_3/tack_3/rational.cpp
	src/Practice_3/tack_3/rational.h
	src/Practice_3/tack_3/main.cpp
)