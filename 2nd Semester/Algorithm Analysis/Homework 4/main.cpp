#include <iostream>

struct List {
    int key;
    List *next;
    List *previous;
} *start = nullptr;

void add(int n);

int remove();

void push(int n);

int pop();

int subtract(int x, int y);

void print();

int main() {
    int command;
    std::cout << "Enter command or enter 0 to end the program: "
              << "\n\t1. Add at start."
              << "\n\t2. Add at end."
              << "\n\t3. Remove at start."
              << "\n\t4. Remove at end."
              << "\n\t5. Subtract 2 numbers from end or start of the list."
              << "\n\t6. Print the list: \n";
    std::cin >> command;

    while (command != 0) {
        int n;
        if (command == 1) {
            std::cout << "\nEnter number: ";
            std::cin >> n;
            add(n);
            std::cout << "\nAdded.";
        } else if (command == 2) {
            std::cout << "\nEnter number: ";
            std::cin >> n;
            push(n);
            std::cout << "\nAdded.";
        } else if (command == 3) {

            remove();
            std::cout << "\nRemoved.";
        } else if (command == 4) {
            pop();
            std::cout << "\nRemoved.";
        } else if (command == 5) {

            std::string firstNumber;
            std::string lastNumber;
            int x;
            int y;
            std::cout << "\nEnter the position in the list for a number to be subtracted from (start for start of list, end for end of list): ";
            std::cin >> firstNumber;
            std::cout << "\nEnter position in the list for a number to subtract (start for start of list, end for end of list): ";
            std::cin >> lastNumber;

            if (firstNumber == "start") {
                x = remove();
            } else if (firstNumber == "end") {
                x = pop();
            }

            if (lastNumber == "start") {
                y = remove();
            } else if (lastNumber == "end") {
                y = pop();
            }

            std::cout << "\nThe result is: " << subtract(x, y);
        } else if (command == 6) {
            print();
        } else {
            std::cout << "\nInvalid command.";
        }

        std::cout << "\nEnter command or enter 0 to end the program: "
                  << "\n\t1. Add at start."
                  << "\n\t2. Add at end."
                  << "\n\t3. Remove at start."
                  << "\n\t4. Remove at end."
                  << "\n\t5. Subtract 2 numbers from end or start of the list."
                  << "\n\t6. Print the list: \n";
        std::cin >> command;
    }
}

void add(int n) {
    List *temp = start;
    start = new List;
    start->key = n;
    start->next = temp;
    start->previous = nullptr;
    if (temp) {
        temp->previous = start;
    }
}

int remove() {
    if (start) {
        List *temp = start;
        start = start->next;
        if (start) {
            start->previous = nullptr;
        }

        int value = temp->key;
        delete (temp);
        return value;
    } else {
        std::cout << "\nList is empty.";
        return 0;
    }
}

void push(int n) {
    List *temp = new List;
    temp->key = n;
    temp->next = nullptr;

    List *temp2 = start;
    if (start) {
        while (temp2->next) {
            temp2 = temp2->next;
        }

        temp2->next = temp;
    } else {
        start = temp;
    }

    temp->previous = temp2;
}

int pop() {
    if (start) {
        List *temp = start;
        if (temp->next == nullptr) {
            start = nullptr;
        } else {
            while (temp->next) {
                temp = temp->next;
            }

            temp->previous->next = nullptr;
        }

        int value = temp->key;
        delete (temp);
        return value;
    } else {
        std::cout << "\nList is empty.";
        return 0;
    }
}

int subtract(int x, int y) {
    return x - y;
}

void print() {
    if (start) {
        List *temp = start;
        std::cout << "\nList: ";
        while (temp) {
            std::cout << temp->key << "\t";
            temp = temp->next;
        }
    } else {
        std::cout << "\nList is empty.";
    }
}