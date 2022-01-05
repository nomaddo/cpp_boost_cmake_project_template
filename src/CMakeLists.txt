add_executable(hello "main.cpp" "lib.cpp")
target_link_libraries(hello Boost::program_options)

set_target_properties(
    hello PROPERTIES
    COMPILE_FEATURES cxx_std_14
    CXX_EXTENSIONS off
)
