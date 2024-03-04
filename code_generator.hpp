#ifndef CODE_GENERATOR_HPP
#define CODE_GENERATOR_HPP

#include <string>
#include <vector>

class CodeGenerator {
public:
    static std::string generateFunction(const std::string& name, const std::string& arguments, const std::string& body);
    static std::string generateClass(const std::string& name, const std::vector<std::string>& attributes,
                                     const std::vector<std::string>& methods);
};

#endif // CODE_GENERATOR_HPP
