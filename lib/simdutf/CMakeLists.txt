project(simdutf VERSION 7.7.0)

add_library(simdutf STATIC)

file(GLOB_RECURSE SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
target_sources(simdutf PRIVATE ${SOURCES})
target_include_directories(simdutf PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_compile_features(simdutf PRIVATE cxx_std_23)
target_compile_definitions(simdutf PRIVATE SIMDUTF_SPAN)