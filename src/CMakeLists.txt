file(GLOB_RECURSE SRCs ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
set(INCs ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(necrosys PRIVATE ${INCs})
target_sources(necrosys PRIVATE ${SRCs})
