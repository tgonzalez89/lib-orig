cmake_minimum_required(VERSION 3.12)

project(mylib-examples)

if(USE_EXTENSION)
  add_compile_definitions(USE_EXTENSION)
endif()

if(NOT DEFINED BUILD_EXAMPLES)
  set(BUILD_EXAMPLES ON)

  find_package(mylib)
  find_package(mylib-e)
endif()

if(BUILD_EXAMPLES)
  add_executable(example)

  target_sources(example
    PRIVATE
      ${CMAKE_CURRENT_LIST_DIR}/main.cpp
  )

  if(TARGET mylib)
    target_link_libraries(example PRIVATE mylib)
  else()
    message(FATAL_ERROR "Cannot find target mylib")
  endif()
  if(TARGET mylib-e)
    target_link_libraries(example PRIVATE mylib-e)
  else()
    message(FATAL_ERROR "Cannot find target mylib-e")
  endif()
endif()
