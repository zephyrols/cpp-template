# Find all test files in the current directory
file(GLOB_RECURSE TEST_SOURCES "*_test.cc")

# Loop through each test source file
foreach(TEST_SOURCE ${TEST_SOURCES})
    # Get the filename without extension
    get_filename_component(TEST_NAME ${TEST_SOURCE} NAME_WE)
    
    # Create an executable for this test
    add_executable(${TEST_NAME} ${TEST_SOURCE})
    
    # Link against required libraries
    target_link_libraries(${TEST_NAME}
        PRIVATE
        ExampleProject_utils
        GTest::gtest_main
    )
    
    # Add as a test
    add_test(NAME ${TEST_NAME} COMMAND ${TEST_NAME})
endforeach()