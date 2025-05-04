#include <ExampleProject/utils/example.hh>
#include <fmt/core.h>

namespace ExampleProject {
namespace utils {

void ExampleType::hello_world() {
  // Print "Hello, World!" to the console using fmt library
  fmt::print("Hello, World!\n");
}

int ExampleType::add(int a, int b) {
  // Return the sum of a and b
  return a + b;
}

} // namespace utils
} // namespace ExampleProject
