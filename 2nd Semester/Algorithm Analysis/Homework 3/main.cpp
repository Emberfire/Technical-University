#include <iostream>

struct Deque {
    int key;
    Deque *next;
} *start = nullptr, *first = nullptr, *last = nullptr;

void push(int n);
int pop();
void add(int n);
int remove();
void print();

int main() {
    Deque deque{};

    int command;
    std::cout << "Enter a number to insert into the deque, or enter 0 to stop the program: ";
    std::cin >> command;
    int counter = 0;
    while (command != 0) {
        push(command);
        counter++;

        std::cout << "\nEnter a number to insert into the deque, or enter 0 to stop the program: ";
        std::cin >> command;
    }

    for (int i = counter; i >= 0; i--) {
        add(remove());
    }

    print();
}

void push(int n) {
    Deque *temp = start;
    start = new Deque;
    start->key = n;
    start->next = temp;
}

int pop() {
    if (start) {
        Deque *temp = start;
        int n = temp->key;
        start = start->next;
        delete (temp);
        return n;
    } else {
        return 0;
    }
}

void add(int n) {
    Deque *temp = last;
    last = new Deque;
    last->key = n;
    last->next = nullptr;

    if (temp) {
        temp->next = last;
    } else {
        first = last;
    }
}

int remove() {
    if (first) {
        Deque *temp = first;
        int n = first->key;
        first = first->next;
        delete(temp);
        if (first == nullptr) {
            last = first;
        }

        return n;
    } else {
        return 0;
    }
}

void print() {
    if (start != nullptr) {
        Deque *temp = start;
        while (temp) {
            std::cout << temp->key << "\t";
            temp = temp->next;
        }
    } else {
        std::cout << "\nDeque is empty.";
    }
}