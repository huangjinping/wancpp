cmake_minimum_required(VERSION 3.24)
project(wancpp)
#https://mp.weixin.qq.com/s/bq-wyzQEhj_UXzOeNGSVxA
set(CMAKE_CXX_STANDARD 11)
#add_executable(cpp2 main.cpp Func.cpp Func.h)
#add_library(cpp2 ${SRC_LIST})

#set(SRC_LIST main.cpp Func.cpp Func.h)
file(GLOB SRC_LIST1 "*.cpp" "src/*.cpp")
#aux_source_directory(. SRC_LIST "*.cpp")
add_executable(wancpp ${SRC_LIST1} src/DuoTai.cpp src/DuoTai.h src/IOManager.cpp src/IOManager.h)