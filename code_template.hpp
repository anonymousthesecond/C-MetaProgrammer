#ifndef CODE_TEMPLATE_HPP
#define CODE_TEMPLATE_HPP

#include <string>
#include <unordered_map>
#include <stdexcept>

class CodeTemplate {
private:
    std::string templateStr;
    std::unordered_map<std::string, std::string> values;

public:
    CodeTemplate(const std::string& templateStr);
    void setValue(const std::string& key, const std::string& value);
    std::string render() const;
};

#endif // CODE_TEMPLATE_HPP
