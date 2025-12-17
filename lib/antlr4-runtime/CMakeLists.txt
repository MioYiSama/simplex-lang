project(antlr4-runtime VERSION 4.13.2)

add_library(antlr4-runtime STATIC)

file(GLOB_RECURSE SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
target_sources(antlr4-runtime PRIVATE ${SOURCES})
target_include_directories(antlr4-runtime PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_compile_features(antlr4-runtime PRIVATE cxx_std_23)
target_compile_definitions(antlr4-runtime PRIVATE ANTLR4CPP_STATIC)