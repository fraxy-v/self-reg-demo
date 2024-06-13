add_library(self-reg-failing STATIC factory.cpp type1.cpp type2.cpp)
target_include_directories(self-reg-failing PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# alternative to  --whole-archive
add_library(self-reg-working OBJECT factory.cpp type1.cpp type2.cpp)
target_include_directories(self-reg-failing PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(demo-failing  main.cpp)
target_link_libraries(demo-failing self-reg-failing)

add_executable(demo-working  main.cpp)
target_link_libraries(demo-working self-reg-working)