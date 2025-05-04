#include <gtest/gtest.h>
#include <ExampleProject/utils/example.hh>
#include <fmt/core.h> 

namespace ExampleProject {
namespace utils {

TEST(ExampleTypeTest, AddMethod) {
  ExampleType example;
  EXPECT_EQ(example.add(2, 3), 5);
  EXPECT_EQ(example.add(-1, 1), 0);
  EXPECT_EQ(example.add(0, 0), 0);
  EXPECT_EQ(example.add(-5, -10), -15);
}

TEST(ExampleTypeTest, HelloWorldOutput) {
  // 重定向标准输出
  testing::internal::CaptureStdout();
  
  // 调用要测试的方法
  ExampleProject::utils::ExampleType example;
  example.hello_world();
  
  // 获取输出并验证
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_EQ(output, "Hello, World!\n");
}

}
}