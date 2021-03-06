MESSAGE(STATUS "cmake: script")
 
# 搜索当前目录下所有文件
file(GLOB_RECURSE SRCS "*.cc" "*.cpp" "*.c" "*.h" "*.hpp")

source_group_by_dir(SRCS)


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
ADD_LIBRARY(script SHARED ${SRCS})


#指定库输出路径
SET(LIBRARY_OUTPUT_PATH ${LIBRARIES})

if(AUTO_GEN_EXPORT_LUA)
add_dependencies(script basecode basecode2lua)
else()
add_dependencies(script basecode)
endif()

# 指定额外的链接库
TARGET_LINK_LIBRARIES(script
  liblua.a
  libbasecode.so
  ${JEMALLOC_LIB_NAME}
)

cotire(script)