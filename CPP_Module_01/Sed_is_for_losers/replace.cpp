#include "replace.hpp"

std::string replace_all(const std::string& line, const std::string& s1, const std::string& s2) {
    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = line.find(s1, pos)) != std::string::npos) {
        result.append(line.substr(pos, found - pos));
        result.append(s2);
        pos = found + s1.length();
    }
    result.append(line.substr(pos));
    return result;
}
