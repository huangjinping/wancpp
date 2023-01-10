cmake_minimum_required(VERSION 3.24)
project(cpp2)
#https://mp.weixin.qq.com/s/bq-wyzQEhj_UXzOeNGSVxA
set(CMAKE_CXX_STANDARD 11)
#add_executable(cpp2 main.cpp Func.cpp Func.h)
#add_library(cpp2 ${SRC_LIST})


#set(SRC_LIST main.cpp Func.cpp Func.h)
aux_source_directory(. SRC_LIST)
add_executable(cpp2 ${SRC_LIST} Father.cpp Father.h)