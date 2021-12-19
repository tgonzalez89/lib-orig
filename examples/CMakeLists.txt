cmake_minimum_required(VERSION 3.12)

project(mylib-examples)

if(NOT DEFINED BUILD_EXAMPLES)
  set(BUILD_EXAMPLES ON)

  find_package(mylib)

  set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin)
endif()

if(BUILD_EXAMPLES)
  add_executable(example)

  target_sources(example
    PRIVATE
      ${CMAKE_CURRENT_LIST_DIR}/main.cpp
  )

  if(TARGET mylib)
    target_link_libraries(example
      PRIVATE
        mylib
    )
  else()
    message(FATAL_ERROR "Cannot find target mylib")
  endif()
endif()
