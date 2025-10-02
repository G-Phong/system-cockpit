#include <iostream>
// #include <string>
#include <sys/sysinfo.h>  // See: https://man7.org/linux/man-pages/man2/sysinfo.2.html

#include "file_utils.hpp"

int main() {
    // Print System Info
    std::cout << "===== Kernel Version ====================================" << '\n';
    auto version = readFile("/proc/version");
    std::cout << " System version = " << version << '\n';
    return EXIT_SUCCESS;

    // Try to expose that to D-Bus here
}