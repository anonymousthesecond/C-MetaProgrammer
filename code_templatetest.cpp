#include "gtest/gtest.h"
#include "CodeTemplate.hpp"

TEST(CodeTemplateTest, RenderTest) {
    CodeTemplate templateObj("Hello, $name!");
    templateObj.setValue("$name", "World");
    EXPECT_EQ(templateObj.render(), "Hello, World!");
}

// Add more test cases as needed
