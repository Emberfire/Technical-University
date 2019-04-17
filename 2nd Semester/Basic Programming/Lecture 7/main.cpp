#include <iostream>
#include <fstream>

int main() {
    std::string text;
    std::getline(std::cin, text);
    int shift;
    std::cin >> shift;

    for (char &i : text) {
        i = (char)(i + shift);
    }

    std::cout << text;

    std::fstream fstream;
    fstream.open("text.txt", std::ios::app);
    fstream << "\ntext";
}