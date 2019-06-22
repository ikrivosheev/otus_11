configure_file(config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/config.h)

add_library(logger record.cpp logger.cpp console_handler.cpp file_handler.cpp state_machine.cpp version.cpp)

set_target_properties(logger PROPERTIES
   CXX_STANDARD 14
   CXX_STANDARD_REQUIRED ON
   COMPILE_OPTIONS "-Wpedantic;-Wall;-Wextra"
)

target_include_directories(logger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

install(TARGETS logger RUNTIME LIBRARY DESTINATION lib)
