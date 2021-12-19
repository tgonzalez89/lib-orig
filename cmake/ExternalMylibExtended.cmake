FetchContent_Declare(
  mylib-e
  GIT_REPOSITORY https://github.com/tgonzalez89/mylib-e.git
  GIT_TAG main
)
FetchContent_GetProperties(mylib-e)

if(NOT mylib-e_POPULATED)
  FetchContent_Populate(mylib-e)

  set(CMAKE_C_COMPILER ${CMAKE_C_COMPILER} CACHE STRING "" FORCE)
  set(CMAKE_CXX_COMPILER ${CMAKE_CXX_COMPILER} CACHE STRING "" FORCE)
  set(CMAKE_INSTALL_PREFIX ${CMAKE_INSTALL_PREFIX} CACHE STRING "" FORCE)
  set(SHARED_LIB ${SHARED_LIB} CACHE BOOL "" FORCE)

  add_subdirectory(
    ${mylib-e_SOURCE_DIR}
    #EXCLUDE_FROM_ALL
  )
endif()
