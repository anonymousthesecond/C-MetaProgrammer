#include <iostream>
#include "CodeTemplate.hpp"
#include "CodeBuilder.hpp"
#include "CodeGenerator.hpp"

int main() {
    // Example usage of CodeTemplate
    CodeTemplate template("Hello, $name!");
    template.setValue("$name", "World");
    std::cout << "Rendered Template: " << template.render() << std::endl;

    // Example usage of CodeBuilder
    CodeBuilder builder;
    builder.addLine("#include <iostream>");
    builder.addLine("int main() {");
    builder.indent();
    builder.addLine("std::cout << \"Hello, World!\" << std::endl;");
    builder.dedent();
    builder.addLine("}");
    std::cout << "Generated Code:" << std::endl << builder.getCode() << std::endl;

    // Example usage of CodeGenerator
    std::string functionCode = CodeGenerator::generateFunction("add", "int a, int b", "return a + b;");
    std::cout << "Generated Function:" << std::endl << functionCode << std::endl;

    std::vector<std::string> attributes = {"int x;", "double y;"};
    std::vector<std::string> methods = {"void method1() { /* Method implementation */ }",
                                        "void method2() { /* Method implementation */ }"};
    std::string classCode = CodeGenerator::generateClass("MyClass", attributes, methods);
    std::cout << "Generated Class:" << std::endl << classCode << std::endl;

    return 0;
}
