cmake_minimum_required(VERSION 3.2)
MESSAGE(STATUS "cmake: project root")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(DEBUG "ON for debug or OFF for release" OFF)
option(TIDY "ON for use clang-tidy(cmake version 3.6+) or OFF" OFF)
option(USE_LUADEBUGER "ON for use lua_debuger or OFF" OFF)
option(USE_JEMALLOC "ON for use jemalloc or OFF" ON)
option(AUTO_GEN_EXPORT_LUA "ON for AUTO_GEN_EXPORT_LUA or OFF" ON)
option(USE_ASAN "ON for use Address Sanitizer or OFF" OFF)
option(USE_UBSAN "ON for use UB Sanitizer or OFF" OFF)
option(USE_TSAN "ON for use Thread Sanitizer or OFF" OFF)
option(USE_LIBCXX "ON for use libcxx or OFF" OFF)


set_directory_properties(PROPERTIES COTIRE_ADD_UNITY_BUILD FALSE)




PROJECT(Framework C CXX)


set (CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/src/CMake")
include(cotire)
set_directory_properties(PROPERTIES
    COTIRE_PREFIX_HEADER_INCLUDE_PATH "${PROJECT_SOURCE_DIR}/depends")


SET(CMAKE_CXX_ERROR_FLAGS 
"-fexceptions \
 -Wall \
 -Wno-reorder \
 -Wno-unused-variable \
 -Wno-unused-function \
 -Wno-unused-result \
 -Wno-undefined-internal \
 -Wno-deprecated \
 -Wno-unused-private-field \
 -Wno-nonportable-include-path \
 -Wno-undefined-var-template")

add_compile_options("-D__FILENAME__='\"$(subst ${CMAKE_SOURCE_DIR}/,,$(abspath $<))\"'")

SET(CMAKE_C_FLAGS_DEBUG "$ENV{CFLAGS} -g -pipe -DDEBUG -pthread")
SET(CMAKE_C_FLAGS_RELEASE "$ENV{CFLAGS} -g -pipe -O3 -DNDEBUG -pthread")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -std=c++17 -g -pipe -DDEBUG ${CMAKE_CXX_ERROR_FLAGS} -pthread")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -std=c++17 -g -pipe -O3 -DNDEBUG ${CMAKE_CXX_ERROR_FLAGS} -pthread")

add_compile_options("-fPIC")


#add_compile_options(-Wl,--unresolved-symbols=ignore-in-shared-libs)
IF(NOT CMAKE_CXX_COMPILER MATCHES "clang")
#gcc
add_compile_options("-rdynamic")

ELSE()
#clang
link_libraries("-Wl,--export-dynamic")
link_libraries("-fuse-ld=lld-9")

ENDIF()


# IF(USE_LIBCXX)
# add_compile_options("-stdlib=libc++")
# link_libraries("c++fs")
# ELSE()
# link_libraries("stdc++fs")
# ENDIF()

IF(USE_ASAN)
  add_compile_options("-DUSE_ASAN")
  add_compile_options("-fsanitize=address")
  add_compile_options("-fno-omit-frame-pointer")
  add_compile_options("-fsanitize-address-use-after-scope")
  add_compile_options("-fno-common")
  add_compile_options("-fsanitize-recover=address")
  link_libraries("-fsanitize=address")

  SET(USE_TSAN 0)
  message("asan:address")
ENDIF(USE_ASAN)


IF(USE_UBSAN)
  add_compile_options("-fsanitize=undefined")
  link_libraries("-fsanitize=undefined")
  message("asan:undefined")
ENDIF(USE_UBSAN)

IF(USE_TSAN)
  add_compile_options("-fsanitize=thread")
  link_libraries("-fsanitize=thread")
  message("asan:thread")
ENDIF(USE_TSAN)


#-----------------------------------------------------------------------------
# Enable ccache if not already enabled by symlink masquerading and if no other
# CMake compiler launchers are already defined
#-----------------------------------------------------------------------------
find_program(CCACHE_EXECUTABLE ccache)
mark_as_advanced(CCACHE_EXECUTABLE)
if(CCACHE_EXECUTABLE)
  foreach(LANG C CXX)
    if(NOT DEFINED CMAKE_${LANG}_COMPILER_LAUNCHER AND NOT CMAKE_${LANG}_COMPILER MATCHES ".*/ccache$")
      message(STATUS "Enabling ccache for ${LANG}")
      set(CMAKE_${LANG}_COMPILER_LAUNCHER ${CCACHE_EXECUTABLE} CACHE STRING "")
    endif()
  endforeach()
endif()

include(FindThreads)

set(PROTOBUF_USE_STATIC_LIBS ON)
set(CMAKE_INCLUDE_PATH ${CMAKE_INCLUDE_PATH} ${PROJECT_SOURCE_DIR}/depends/src/protobuf/src)
set(CMAKE_LIBRARY_PATH ${CMAKE_LIBRARY_PATH} ${PROJECT_SOURCE_DIR}/depends/lib)
SET(PROTOBUF_PROTOC_EXECUTABLE ${PROJECT_SOURCE_DIR}/depends/bin/protoc) 
include(FindProtobuf)

set (MY_CLANG_TIDY_STR "clang-tidy-4.0;-style=file;-checks=-*,clang-analyzer-core*,clang-analyzer-cplusplus*,clang-analyzer-nullability*")



message("CMAKE_CXX_COMPILER:" ${CMAKE_CXX_COMPILER})
IF(DEBUG)
message("CMAKE_CXX_FLAGS:" ${CMAKE_CXX_FLAGS_DEBUG})
ELSE()
message("CMAKE_CXX_FLAGS:" ${CMAKE_CXX_FLAGS_RELEASE})
ENDIF()


SET(CMAKE_SKIP_RPATH  FALSE)
SET(CMAKE_SKIP_BUILD_RPATH  FALSE)
SET(CMAKE_SKIP_INSTALL_RPATH  FALSE)

SET(CMAKE_BUILD_RPATH "./:./libs:../libs:./depends:../depends")
SET(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE) 
SET(CMAKE_INSTALL_RPATH "./:./libs:../libs:./depends:../depends")
SET(CMAKE_INSTALL_RPATH_USE_LINK_PATH FALSE) 

include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/depends/src/jemalloc/include)
include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/depends/src/cpp_redis/includes)
include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/depends/src/cpp_redis/tacopie/includes)
include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/depends/src/libevent/include)
include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/depends/src/protobuf/src)
include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/depends/src/lua/src)
include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/depends/src/curlpp/include)
include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/depends/src/rapidjson/include)
include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/depends/src/xlnt/include)
include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/depends/src/fmt/include)
include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/depends/src/brpc/include)
include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/depends/src/gflags/include)
include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/depends/src/leveldb/include)
include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/depends/src/snappy)
#include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/depends/src/libwebsockets/build/include)
include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/depends/src/box2d/include)
include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/depends/src/cpp-taskflow)
include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/depends/src/recastnavigation/Recast/Inlcude)
include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/depends/src/recastnavigation/Detour/Inlcude)
#include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/depends/src/recastnavigation/DetourCrowd/Inlcude)
#include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/depends/src/recastnavigation/DetourTileCache/Inlcude)
include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/depends/src/spy/include)
include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/depends/src/)

include_directories(${PROJECT_SOURCE_DIR}/src/server_share/)
include_directories(${PROJECT_SOURCE_DIR}/src/comm/basecode/)
include_directories(${PROJECT_SOURCE_DIR}/src/comm/basecode/math)
include_directories(${PROJECT_SOURCE_DIR}/src/comm/network/)
include_directories(${PROJECT_SOURCE_DIR}/src/comm/message_route/)
include_directories(${PROJECT_SOURCE_DIR}/src/comm/mydb/)
include_directories(${PROJECT_SOURCE_DIR}/src/game_comm/proto/)
include_directories(${PROJECT_SOURCE_DIR}/src/game_comm/proto/config/)
include_directories(${PROJECT_SOURCE_DIR}/src/game_comm/proto/common/)
include_directories(${PROJECT_SOURCE_DIR}/src/game_comm/mydbtable/)
include_directories(${PROJECT_SOURCE_DIR}/src/game_comm/script/)
include_directories(${PROJECT_SOURCE_DIR}/src/game_comm/gamemap/)
include_directories(${PROJECT_SOURCE_DIR}/src/service/service_comm/)
include_directories(${PROJECT_SOURCE_DIR}/src/service/rpcservice_comm/)
include_directories(${PROJECT_SOURCE_DIR}/src/)

macro(source_group_by_dir source_files)
    set(sgbd_cur_dir ${CMAKE_CURRENT_SOURCE_DIR})
    foreach(sgbd_file ${${source_files}})
        string(REGEX REPLACE ${sgbd_cur_dir}/\(.*\) \\1 sgbd_fpath ${sgbd_file})
        string(REGEX REPLACE "\(.*\)/.*" \\1 sgbd_group_name ${sgbd_fpath})
        string(COMPARE EQUAL ${sgbd_fpath} ${sgbd_group_name} sgbd_nogroup)
        string(REPLACE "\\" "/" sgbd_group_name ${sgbd_group_name})
        if(sgbd_nogroup)
            set(sgbd_group_name "")
        endif(sgbd_nogroup)	
        source_group(${sgbd_group_name} FILES ${sgbd_file})
        list(FIND sgbd_dirs "${sgbd_cur_dir}/${sgbd_group_name}" RET)
        if (${RET} EQUAL -1)
        list(APPEND sgbd_dirs "${sgbd_cur_dir}/${sgbd_group_name}")
        endif()
    endforeach(sgbd_file)
    foreach(sgbd_dir ${sgbd_dirs})
        include_directories("${sgbd_dir}")
        #message("add include dir:" "${sgbd_dir}")
    endforeach()	
endmacro(source_group_by_dir)

macro(source_group_by_files sgbd_group_name source_files)
	set(sgbd_cur_dir ${CMAKE_CURRENT_SOURCE_DIR})
    foreach(sgbd_file ${${source_files}})	
		message("group:${sgbd_group_name} file:${sgbd_file}")	
        source_group(${sgbd_group_name} FILES ${sgbd_file})
    endforeach(sgbd_file)
endmacro(source_group_by_files)


IF(DEBUG)
MESSAGE(STATUS "Build Debug...")
SET(CMAKE_BUILD_TYPE Debug)
SET(LIBRARIES ${PROJECT_BINARY_DIR}/lib/debug)
SET(BINARIES ${PROJECT_BINARY_DIR}/bin/debug)
ELSE()
MESSAGE(STATUS "Build Release...")
SET(CMAKE_BUILD_TYPE Release)
SET(LIBRARIES ${PROJECT_BINARY_DIR}/lib/release)
SET(BINARIES ${PROJECT_BINARY_DIR}/bin/release)
ENDIF()


LINK_DIRECTORIES(
 ${PROJECT_SOURCE_DIR}/depends/lib/
 ${LIBRARIES}
)


IF(DEBUG)
ADD_SUBDIRECTORY(src obj/debug)
ELSE()
ADD_SUBDIRECTORY(src obj/release)
ENDIF()



MESSAGE(STATUS ${CMAKE_BUILD_TYPE})
