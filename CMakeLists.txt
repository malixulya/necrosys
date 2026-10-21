cmake_minimum_required(VERSION 3.30)
project(necrosys VERSION 0.0.1 LANGUAGES C CXX )
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(necrosys)
if(CMAKE_CXX_COMPILER_ID STREQUAL "Clang" AND CMAKE_CXX_SIMULATE_ID STREQUAL "MSVC")
    target_compile_options(necrosys PRIVATE /EHsc /GR-)
elseif(MSVC)
    target_compile_options(necrosys PRIVATE /EHsc /GR-)
else()
    target_compile_options(necrosys PRIVATE -fno-exceptions -fno-rtti)
endif()
set_target_properties(necrosys PROPERTIES
    VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}"
    DEBUGGER_WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}"
)
add_subdirectory(src)
add_subdirectory(vendor)
add_subdirectory(res)
message("
==================================================
NECROSYS ENGINE — Build Configuration
==================================================
Version:     ${PROJECT_VERSION}
Compiler:    ${CMAKE_CXX_COMPILER_ID} ${CMAKE_CXX_COMPILER_VERSION}
Build Type:  ${CMAKE_BUILD_TYPE}
Graphics:    Vulkan (SDL3)
Audio:       SDL3_mixer
==================================================
")
