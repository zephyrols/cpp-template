# ExampleProject

This is the repository for ExampleProject.
Author: {{author_name}}

# Requirements
- C++17 or higher
- CMake 3.21 or higher
- vcpkg
  - Google Test
  - fmt


# Usage
1. Clone the repository:
```bash
git clone https://github.com/{{author_name}}/ExampleProject.git
cd ExampleProject
```
2. Install dependencies using vcpkg:
```bash
git clone https://github.com/microsoft/vcpkg.git
./vcpkg/bootstrap-vcpkg.sh
export VCPKG_ROOT=$(realpath vcpkg)
```
3. Build the project:
```bash
cmake -S . -B build
cmake --build build
```
