#include "CodeGenerator.hpp"
#include "CodeBuilder.hpp"

std::string CodeGenerator::generateFunction(const std::string& name, const std::string& arguments,
                                            const std::string& body) {
    CodeBuilder builder;
    builder.addLine("void " + name + "(" + arguments + ") {");
    builder.indent();
    builder.addLine(body);
    builder.dedent();
    builder.addLine("}");
    return builder.getCode();
}

std::string CodeGenerator::generateClass(const std::string& name, const std::vector<std::string>& attributes,
                                         const std::vector<std::string>& methods) {
    CodeBuilder builder;
    builder.addLine("class " + name + " {");
    builder.addLine("public:");
    builder.indent();
    for (const auto& attribute : attributes) {
        builder.addLine(attribute + ";");
    }
    for (const auto& method : methods) {
        builder.addLine(method);
    }
    builder.dedent();
    builder.addLine("};");
    return builder.getCode();
}
