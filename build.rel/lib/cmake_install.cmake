# Install script for directory: /media/ubuntu/RESERVE0/workspace/llvm-project/llvm/lib

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
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/IR/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/FuzzMutate/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/IRReader/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/CodeGen/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/BinaryFormat/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/Bitcode/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/Bitstream/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/DWARFLinker/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/Extensions/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/Frontend/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/Transforms/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/Linker/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/Analysis/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/LTO/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/MC/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/MCA/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/Object/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/ObjectYAML/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/Option/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/Remarks/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/DebugInfo/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/ExecutionEngine/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/Target/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/AsmParser/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/LineEditor/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/ProfileData/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/Passes/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/TextAPI/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/ToolDrivers/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/XRay/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/Testing/cmake_install.cmake")
  include("/media/ubuntu/RESERVE0/workspace/build.rel/lib/WindowsManifest/cmake_install.cmake")

endif()

