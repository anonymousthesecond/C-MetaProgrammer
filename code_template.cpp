#include "CodeTemplate.hpp"

CodeTemplate::CodeTemplate(const std::string& templateStr) : templateStr(templateStr) {}

void CodeTemplate::setValue(const std::string& key, const std::string& value) {
    values[key] = value;
}

std::string CodeTemplate::render() const {
    std::string renderedStr = templateStr;
    for (const auto& [key, value] : values) {
        size_t pos = renderedStr.find(key);
        if (pos != std::string::npos) {
            renderedStr.replace(pos, key.length(), value);
        }
    }
    return renderedStr;
}
