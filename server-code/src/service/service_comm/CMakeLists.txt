MESSAGE(STATUS "cmake: service_comm")

# 搜索当前目录下所有文件
file(GLOB_RECURSE SRCS "*.cc" "*.cpp" "*.c" "*.h" "*.hpp")

IF(TIDY)
set(CMAKE_CXX_CLANG_TIDY ${MY_CLANG_TIDY_STR})
ELSE()
ENDIF()
IF(USE_JEMALLOC)
ADD_DEFINITIONS(-DUSE_JEMALLOC)
set(JEMALLOC_LIB_NAME "libjemalloc.so")
ELSE()
ENDIF()


# 生成库文件
ADD_LIBRARY(service_comm SHARED ${SRCS})
#SET_TARGET_PROPERTIES(network PROPERTIES CLEAN_DIRECT_OUTPUT 1)
#SET_TARGET_PROPERTIES(network PROPERTIES VERSION 0.1 SOVERSION 1)


#指定库输出路径
SET(LIBRARY_OUTPUT_PATH ${LIBRARIES})
ADD_DEPENDENCIES(service_comm network basecode myproto mydb message_route)
# 指定额外的链接库
TARGET_LINK_LIBRARIES(service_comm
 libnetwork.so
 libbasecode.so
 libmyproto.so
 libmydb.so
 libmessage_route.so
 libfmt.so
 pthread
 rt
 dl
 ${JEMALLOC_LIB_NAME}
)
cotire(service_comm)
