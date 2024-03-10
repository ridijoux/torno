add_library(core "")

target_sources(core
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/ranking.cpp
    ${CMAKE_CURRENT_LIST_DIR}/stage/abstractstage.cpp
    ${CMAKE_CURRENT_LIST_DIR}/stage/poolstage.cpp
    ${CMAKE_CURRENT_LIST_DIR}/team.cpp
    ${CMAKE_CURRENT_LIST_DIR}/tournament.cpp
  PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}/ranking.h
    ${CMAKE_CURRENT_LIST_DIR}/stage/poolstage.h
    ${CMAKE_CURRENT_LIST_DIR}/team.h
    ${CMAKE_CURRENT_LIST_DIR}/tournament.h
  )

target_include_directories(core
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )
