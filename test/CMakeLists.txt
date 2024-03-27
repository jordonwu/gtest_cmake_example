enable_testing()

# need build and install googletest if using system's GTest
find_package(GTest REQUIRED)

include_directories(
${GTEST_INCLUDE_DIRS}
${CMAKE_SOURCE_DIR}/lib
${CMAKE_SOURCE_DIR}/lib/libfoo
)

add_executable(TestFoo TestFoo.cpp)

target_link_libraries(TestFoo
        libfoo
        ${GTEST_BOTH_LIBRARIES}
        pthread )


add_test(NAME TestFoo
         COMMAND TestFoo)
