#include "gtest/gtest.h"
#include "CodeGenerator.hpp"

TEST(CodeGeneratorTest, GenerateFunctionTest) {
    std::string expected = "void add(int a, int b) {\n  return a + b;\n}\n";
    EXPECT_EQ(CodeGenerator::generateFunction("add", "int a, int b", "return a + b;"), expected);
}

// Add more test cases as needed
