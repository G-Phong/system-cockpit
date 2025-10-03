#include "file_utils.hpp"

#include <fstream>
#include <sstream>

std::string readFile(std::string const& file) {
    std::ifstream is(file);
    if (!is.good()) {
        throw std::runtime_error("Error: stream has errors.");
    }
    std::stringstream ss;
    ss << is.rdbuf();
    std::string m;
    // Remove ending line character '\n' or '\r\n'.
    std::getline(ss, m);
    return m;
}