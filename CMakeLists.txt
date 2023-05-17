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
	src/Practice_14/tack_1/division_exception.cpp
	src/Practice_14/tack_2/index_exception.cpp
	src/Practice_14/tack_3/null_pointer_exception.cpp
	src/Practice_6/tack_1/Conus.cpp
	src/Practice_6/tack_1/Conus.h
	src/Practice_6/tack_1/main.cpp
	src/Practice_6/tack_2/Conus.cpp
	src/Practice_6/tack_2/Conus.h
	src/Practice_6/tack_2/main.cpp
	src/Practice_6/tack_2/UsechenniyConus.cpp
	src/Practice_6/tack_2/UsechenniyConus.h
	src/Practice_6/tack_3/Bay.cpp
	src/Practice_6/tack_3/Bay.h
	src/Practice_6/tack_3/main.cpp
	src/Practice_6/tack_3/Ocean.cpp
	src/Practice_6/tack_3/Ocean.h
	src/Practice_6/tack_3/Sea.cpp
	src/Practice_6/tack_3/Sea.h
)