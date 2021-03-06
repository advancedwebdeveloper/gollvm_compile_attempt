# Install script for directory: /media/ubuntu/RESERVE0/workspace/llvm-project/llvm/unittests

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/ADT/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/Analysis/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/AsmParser/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/BinaryFormat/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/Bitcode/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/Bitstream/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/CodeGen/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/DebugInfo/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/Demangle/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/ExecutionEngine/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/Frontend/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/FuzzMutate/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/IR/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/LineEditor/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/Linker/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/MC/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/MI/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/Object/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/ObjectYAML/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/Option/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/Remarks/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/Passes/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/ProfileData/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/Support/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/TableGen/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/Target/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/TextAPI/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/Transforms/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/XRay/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/unittests/tools/cmake_install.cmake")

endif()

