# ===-- source/nes/CMakeLists.txt - Nes build configuration ----------------=== #
#
#                            The OpenNES Project
# 
#  This file is distributed under GPL v2. See LICENSE.md for details.
#
# ===----------------------------------------------------------------------=== #
set(LIBS common)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
set(SRCS Cartridge.cpp
         CartridgeBuilder.cpp
         CartridgeMapper.cpp
         CartridgeMapperBuilder.cpp
         mappers/NRom.cpp
         )

add_library(nes ${SRCS})
target_link_libraries(nes ${LIBS})
