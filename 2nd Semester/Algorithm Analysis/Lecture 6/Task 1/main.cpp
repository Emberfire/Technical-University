#include <iostream>

struct Stack {
    int key;
    Stack *next;
} *start = nullptr;

void push(int n) {
    Stack *temp = start;
    start = new Stack;
    start->key = n;
    start->next = temp;
}

int pop(int &n) {
    if (start) {
        Stack *temp = start;
        start = start->next;
        n = temp->key;
        delete (temp);
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    Stack *stack = new Stack;

    while (n > 0) {
        push(n);
    }

    while (stack->next != nullptr) {
        std::cout << pop();
    }
}