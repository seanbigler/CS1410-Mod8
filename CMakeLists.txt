cmake_minimum_required(VERSION 3.8)
project(Mod8)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES dynamicMem.cpp)
#set(SOURCE_FILES testStrClass.cpp MyString.cpp MyString.h)
#set(SOURCE_FILES DynamicIntArray.cpp)
#set(SOURCE_FILES exception1.cpp)
#set(SOURCE_FILES DistanceException.cpp Distance.cpp Distance.h)
set(SOURCE_FILES Const.cpp Person.cpp Person.h)



add_executable(Mod8 ${SOURCE_FILES})