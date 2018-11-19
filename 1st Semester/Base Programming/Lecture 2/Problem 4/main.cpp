#include <iostream>

int main() {
    int stotinkas1;
    int stotinkas2;
    int stotinkas5;
    int stotinkas10;
    int stotinkas20;
    int stotinkas50;
    int levs;
    int levs2;

    std::cin >> stotinkas1;
    std::cout << "1 stotinkas Quantity: " << stotinkas1 * 100 << "\n";
    std::cin >> stotinkas2;
    std::cout << "2 stotinkas Quantity: " << stotinkas2 * 50 << "\n";
    std::cin >> stotinkas5;
    std::cout << "5 stotinkas Quantity: " << stotinkas5 * 20 << "\n";
    std::cin >> stotinkas10;
    std::cout << "10 stotinkas Quantity: " << stotinkas10 * 10 << "\n";
    std::cin >> stotinkas20;
    std::cout << "20 stotinkas Quantity: " << stotinkas20 * 5 << "\n";
    std::cin >> stotinkas50;
    std::cout << "50 stotinkas Quantity: " << stotinkas50 * 2 << "\n";
    std::cin >> levs;
    std::cout << "1 Lev Quantity: " << levs << "\n";
    std::cin >> levs2;
    std::cout << "2 Levs Quantity: " << levs2 / 2 << "\n";
}