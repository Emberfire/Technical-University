#include <iostream>
#include <iomanip>

int main() {
    std::cout << 10 << 15 << "\n";
    std::cout << 10 << std::setw(10) << 15 << "\n";
    std::cout << 10 << std::hex << std::setw(10) << 15 << "\n";
    std::cout << 10 << std::dec << std::setiosflags(std::ios::left) << 15 << "\n";
    std::cout << 10 << std::setw(10) << std::hex << 15 << "\n";

    std::cout << std::setfill('-') << "\n";
    std::cout << std::dec << 10 << 15 << "\n";
    std::cout << 10 << std::setw(10) << std::setiosflags(std::ios::right) << 15 << "\n";
    std::cout << 10 << std::hex << std::setw(10) << 15 << "\n";
    std::cout << 10 << std::dec << std::setiosflags(std::ios::left) << 15 << "\n";
    std::cout << 10 << std::hex << 15 << "\n";
}