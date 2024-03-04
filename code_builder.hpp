#ifndef CODE_BUILDER_HPP
#define CODE_BUILDER_HPP

#include <string>
#include <vector>
#include <stdexcept>

class CodeBuilder {
private:
    std::vector<std::string> codeLines;
    int indent;

public:
    CodeBuilder(int indent = 0);
    void addLine(const std::string& line);
    void indent();
    void dedent();
    std::string getCode() const;
};

#endif // CODE_BUILDER_HPP
