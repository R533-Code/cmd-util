cmake_minimum_required(VERSION 3.4)

project(cmd-util 
	LANGUAGES C
	VERSION 0.0.0.0)

file(GLOB_RECURSE CMD_FILES_C src/*.c)
file(GLOB_RECURSE CMD_FILES_H src/*.h)

add_executable(ucmd
	${CMD_FILES_C}
	${CMD_FILES_H})

configure_file("${PROJECT_SOURCE_DIR}/resources/cmake/cmake_config.h.in"
	"${PROJECT_SOURCE_DIR}/src/util/config.h"
)

# Precompiled headers
target_precompile_headers(ucmd PUBLIC
	"$<$<COMPILE_LANGUAGE:C>:${PROJECT_SOURCE_DIR}/src/util/pch.h>")

include_directories("src/" "src/util/")