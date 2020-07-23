# Install script for directory: /media/ubuntu/RESERVE0/workspace/llvm-project/llvm

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/media/ubuntu/RESERVE0/workspace/release_dir")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xllvm-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES
    "/media/ubuntu/RESERVE0/workspace/llvm-project/llvm/include/llvm"
    "/media/ubuntu/RESERVE0/workspace/llvm-project/llvm/include/llvm-c"
    FILES_MATCHING REGEX "/[^/]*\\.def$" REGEX "/[^/]*\\.h$" REGEX "/[^/]*\\.td$" REGEX "/[^/]*\\.inc$" REGEX "/LICENSE\\.TXT$" REGEX "/\\.svn$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xllvm-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES
    "/media/ubuntu/RESERVE0/workspace/build.rel/include/llvm"
    "/media/ubuntu/RESERVE0/workspace/build.rel/include/llvm-c"
    FILES_MATCHING REGEX "/[^/]*\\.def$" REGEX "/[^/]*\\.h$" REGEX "/[^/]*\\.gen$" REGEX "/[^/]*\\.inc$" REGEX "/CMakeFiles$" EXCLUDE REGEX "/config\\.h$" EXCLUDE REGEX "/\\.svn$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcmake-exportsx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/llvm" TYPE FILE FILES "/media/ubuntu/RESERVE0/workspace/build.rel/lib/cmake/llvm/LLVMConfigExtensions.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/Demangle/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/Support/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/TableGen/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/utils/TableGen/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/include/llvm/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/utils/FileCheck/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/utils/PerfectShuffle/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/utils/count/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/utils/not/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/utils/yaml-bench/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/projects/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/tools/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/runtimes/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/examples/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/utils/lit/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/test/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/utils/unittest/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/docs/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/cmake/modules/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/utils/llvm-lit/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/utils/benchmark/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/benchmarks/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/utils/llvm-locstats/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/media/ubuntu/RESERVE0/workspace/build.rel/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
