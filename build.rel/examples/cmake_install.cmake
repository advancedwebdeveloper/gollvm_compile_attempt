# Install script for directory: /media/ubuntu/RESERVE0/workspace/llvm-project/llvm/examples

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
  include("/media/ubuntu/RESERVE0/workspace/build.rel/examples/BrainF/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/examples/Fibonacci/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/examples/HowToUseJIT/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/examples/HowToUseLLJIT/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/examples/IRTransforms/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/examples/Kaleidoscope/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/examples/ModuleMaker/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/examples/OrcV2Examples/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/examples/SpeculativeJIT/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/examples/Bye/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/examples/ThinLtoJIT/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/examples/ParallelJIT/cmake_install.cmake")

endif()

