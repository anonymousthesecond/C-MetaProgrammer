#include "CodeBuilder.hpp"

CodeBuilder::CodeBuilder(int indent) : indent(indent) {}

void CodeBuilder::addLine(const std::string& line) {
    codeLines.push_back(std::string(indent * 2, ' ') + line);
}

void CodeBuilder::indent() {
    ++indent;
}

void CodeBuilder::dedent() {
    if (indent <= 0) {
        throw std::logic_error("Indent cannot be negative or zero");
    }
    --indent;
}

std::string CodeBuilder::getCode() const {
    std::string code;
    for (const auto& line : codeLines) {
        code += line + "\n";
    }
    return code;
}
