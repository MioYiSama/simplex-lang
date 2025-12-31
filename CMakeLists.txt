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
    src/Util/StringUtil.cpp
    src/Util/CommandLineUtil.cpp
    # src/Grammar/SimplexLexer.cpp
    # src/Grammar/SimplexParser.cpp
    # src/Grammar/SimplexBaseVisitor.cpp
    # src/Grammar/SimplexVisitor.cpp
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

add_custom_target(generate_grammar
    COMMAND java -jar lib/antlr4/antlr4-4.13.2-complete.jar -Dlanguage=Cpp -package sx::grammar -visitor -no-listener src/Grammar/Simplex.g4
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
)

# ANTLR4
add_subdirectory(lib/antlr4-runtime)
target_link_libraries(sx PRIVATE antlr4-runtime)

# SimdUTF
add_subdirectory(lib/simdutf)
target_link_libraries(sx PRIVATE simdutf)

# LLVM
include(lib/llvm.cmake)
target_include_directories(sx PRIVATE ${LLVM_INCLUDE_DIRS})
target_compile_definitions(sx PRIVATE ${LLVM_DEFINITIONS_LIST})
target_link_libraries(sx PRIVATE ${llvm_libs})
