
include(FindLibClang)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${LIBCLANG_CXXFLAGS}")
LINK_DIRECTORIES(${LIBCLANG_LIBDIR})

# 搜索当前目录下所有文件
file(GLOB_RECURSE SRCS "*.cc" "*.cpp" "*.c" "*.h" "*.hpp")
IF(TIDY)
set(CMAKE_CXX_CLANG_TIDY ${MY_CLANG_TIDY_STR})
ELSE()
ENDIF()
add_definitions (-Wno-format-security)


# 生成库文件
add_executable(cxx2lua ${SRCS})

#指定库输出路径
SET(EXECUTABLE_OUTPUT_PATH ${BINARIES})

# 指定额外的链接库
TARGET_LINK_LIBRARIES(cxx2lua
 fmt
 libclang.so
 dl
 pthread
)


cotire(cxx2lua)
