#include <iostream>

struct List {
    int key;
    List *next;
    List *previous;
} *start = nullptr;

void add(int n);
int remove();
void addBefore(int n, int k);
void addAfter(int n, int k);
int removeAt(int n);
void push(int n);
int pop();
void print();

int main() {
    int n;
    std::cout << "Enter amount of entries: ";
    std::cin >> n;

    List list;
    for (int i = 0; i < n; i++) {

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

        int value = start->key;
        delete(temp);
        return value;
    } else {
        std::cout << "\nList is empty.";
        return 0;
    }
}

void addBefore(int n, int k) {
    if (start) {
        List *temp = start;
        while (temp->key != k && temp->next) {
            temp = temp->next;
        }

        if (temp->key == k) {
            List *temp2 = temp;
            temp2->next =  temp->next;
            temp2->previous = temp;
            temp->key = n;
            temp2->key = k;
            if (temp->next) {
                temp->next->previous = temp2;
                temp->previous = temp2;
            }
        } else {
            std::cout << "\nNo such element.";
        }
    }
}

void addAfter(int n, int k) {
    if (start) {
        List *temp = start;
        while (temp->key != k && temp->next) {
            temp = temp->next;
        }

        if (temp->key == k) {
            List *temp2 = temp;
            temp2->next =  temp->next;
            temp2->previous = temp;
            temp2->key = n;
            temp->key = k;
            if (temp2->next) {
                temp2->previous->next = temp2;
                temp2->previous = temp;
            }
        } else {
            std::cout << "\nNo such element.";
        }
    }
}

int removeAt(int n) {
    if (start) {
        List *temp = start;
        while (temp->key != n && temp->next) {
            temp = temp->next;
        }

        if (temp->key == n) {
            if (temp->next) {
                temp->next->previous = temp->previous;
            }

            if (temp->previous) {
                temp->previous->next = temp->next;
            } else {
                start = temp->next;
            }

            delete(temp);
        } else {
            std::cout << "\nNo such value found.";
        }
    } else {
        std::cout << "\nNo such value found.";
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
        delete(temp);
        return value;
    } else {
        std::cout << "\nList is empty.";
        return 0;
    }
}

void print() {
    if (start) {
        List *temp = start;
        std::cout << "\n List: ";
        while (temp) {
            std::cout << temp->key << "\t";
            temp = temp->next;
        }
    } else {
        std::cout << "\nList is empty.";
    }
}