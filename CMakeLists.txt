add_executable(lc main.cpp)
target_compile_features(lc PRIVATE cxx_std_20)
find_package(fmt REQUIRED)
target_link_libraries(lc PRIVATE fmt::fmt)
