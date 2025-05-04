file(GLOB_RECURSE srcs CONFIG_DEPENDENS *.cc)

add_library(
  ExampleProject_utils
  SHARED
  ${srcs}
)

target_include_directories(
  ExampleProject_utils
  PUBLIC
  ${CMAKE_SOURCE_DIR}/include
)

target_link_libraries(
  ExampleProject_utils
  PUBLIC
  fmt::fmt
)