cmake_minimum_required(VERSION 3.15)
project(simple_gfx)

add_executable(simple_gfx "src/main.cpp")
set_property(TARGET simple_gfx PROPERTY CXX_STANDARD 17)

target_include_directories(simple_gfx PRIVATE 
    "${CMAKE_CURRENT_SOURCE_DIR}/third_party/glm-0.9.9.8")
target_include_directories(simple_gfx PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/third_party/tinyobjloader")

add_custom_target(assets ALL COMMAND ${CMAKE_COMMAND} -E create_symlink
    "${CMAKE_CURRENT_SOURCE_DIR}/assets" "${CMAKE_CURRENT_BINARY_DIR}/${CMAKE_CFG_INTDIR}/assets")

add_subdirectory(src)