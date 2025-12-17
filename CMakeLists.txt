cmake_minimum_required(VERSION 3.15)
project(simplex-lang)

add_subdirectory(lib/antlr4-runtime)
add_subdirectory(lib/simdutf)
find_package(LLVM REQUIRED CONFIG)
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

add_executable(sx)
target_sources(sx PRIVATE
        src/main.cpp
        src/Util/StringUtil.cpp
        src/Util/CommandLineUtil.cpp
        src/Grammar/SimplexLexer.cpp
        src/Grammar/SimplexParser.cpp
        src/Grammar/SimplexBaseVisitor.cpp
        src/Grammar/SimplexVisitor.cpp
)
target_compile_features(sx PRIVATE cxx_std_23)

if (${WIN32})
    message("Windows")
    target_compile_definitions(sx PRIVATE SX_OS_WINDOWS WIN32_LEAN_AND_MEAN)
elseif (${APPLE})
    message("macOS")
    target_compile_definitions(sx PRIVATE SX_OS_MACOS)
elseif (${LINUX})
    message("Linux")
    target_compile_definitions(sx PRIVATE SX_OS_LINUX)
else ()
    message(FATAL_ERROR "Unknown OS")
endif ()

target_link_libraries(sx PRIVATE antlr4-runtime)
target_link_libraries(sx PRIVATE simdutf)

target_include_directories(sx PRIVATE ${LLVM_INCLUDE_DIRS})
separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
target_compile_definitions(sx PRIVATE ${LLVM_DEFINITIONS_LIST})
llvm_map_components_to_libnames(llvm_libs support core irreader)
target_link_libraries(sx PRIVATE ${llvm_libs})

add_custom_target(generate_grammar
        COMMAND java -jar lib/antlr4/antlr4-4.13.2-complete.jar -package sx::grammar -visitor -no-listener -o src/Grammar src/Grammar/Simplex.g4
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
)