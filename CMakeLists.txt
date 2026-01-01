cmake_minimum_required(VERSION 3.15)
project(simplex-lang)

add_executable(sx)
set_target_properties(sx PROPERTIES
    CXX_STANDARD 23
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)

target_sources(sx PRIVATE
    src/main.cpp
    src/Grammar/SimplexLexer.cpp
    src/Grammar/SimplexParser.cpp
    src/Grammar/SimplexParserBaseVisitor.cpp
    src/Grammar/SimplexParserVisitor.cpp
    src/Util/CommandLineUtil.cpp
    src/Util/StringUtil.cpp
    src/Util/SimdutfCharStream.cpp
)

# Configure OS
if (${WIN32})
    target_compile_definitions(sx PRIVATE SX_OS_WINDOWS)
elseif (${APPLE})
    target_compile_definitions(sx PRIVATE SX_OS_MACOS)
elseif (${LINUX})
    target_compile_definitions(sx PRIVATE SX_OS_LINUX)
else ()
    message(FATAL_ERROR "Unknown OS")
endif ()

# https://github.com/antlr/antlr4/actions/workflows/hosted.yml
set(ANTLR4_JAR ${CMAKE_SOURCE_DIR}/lib/antlr4/antlr4-4.13.3-SNAPSHOT-complete.jar)
add_custom_target(generate_grammar
    COMMAND java -jar ${ANTLR4_JAR} -Dlanguage=Cpp -package sx::grammar SimplexLexer.g4
    COMMAND java -jar ${ANTLR4_JAR} -Dlanguage=Cpp -package sx::grammar -visitor -no-listener SimplexParser.g4
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/src/Grammar
)
add_dependencies(sx generate_grammar)

# ANTLR4
add_subdirectory(lib/antlr4-runtime)
target_link_libraries(sx PRIVATE antlr4-runtime)

# CLI11
target_include_directories(sx PRIVATE lib/cli11)

# SimdUTF
add_subdirectory(lib/simdutf)
target_link_libraries(sx PRIVATE simdutf)

# LLVM
include(lib/llvm.cmake)
target_include_directories(sx PRIVATE ${LLVM_INCLUDE_DIRS})
target_compile_definitions(sx PRIVATE ${LLVM_DEFINITIONS_LIST})
target_link_libraries(sx PRIVATE ${llvm_libs})
