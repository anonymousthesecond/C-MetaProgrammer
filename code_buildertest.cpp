#include "gtest/gtest.h"
#include "CodeBuilder.hpp"

TEST(CodeBuilderTest, AddLineTest) {
    CodeBuilder builder;
    builder.addLine("int main() {");
    EXPECT_EQ(builder.getCode(), "int main() {\n");
}

// Add more test cases as needed
