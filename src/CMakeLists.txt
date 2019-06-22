add_executable(cmd main.cpp)

set_target_properties(cmd PROPERTIES
   CXX_STANDARD 14
   CXX_STANDARD_REQUIRED ON
   COMPILE_OPTIONS "-Wpedantic;-Wall;-Wextra"
)

target_link_libraries(cmd async)

