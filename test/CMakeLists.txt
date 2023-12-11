find_package(GTest REQUIRED)

enable_testing()

add_executable(test_physics_engine
    test_example.cpp
)

target_link_libraries(test_physics_engine
    PUBLIC
        GTest::GTest
        GTest::Main
        physics::engine
)

include(GoogleTest)
gtest_discover_tests(test_physics_engine)
