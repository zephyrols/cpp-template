#include <ExampleProject/utils/example.hh>
#include <fmt/core.h>

int main() {
    // Call the hello_world function
    ExampleProject::utils::ExampleType example;
    example.hello_world();
    fmt::print("Sum: {}\n", example.add(5, 3));
    return 0;
}