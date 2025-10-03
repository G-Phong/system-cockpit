#pragma once

#include <string>

/**
 * @brief
 *
 * @param file Path to the file
 * @return std::string First line of the file (without newline)
 * @throws std::runtime_error If the file cannot be read
 */
std::string readFile(std::string const& file);