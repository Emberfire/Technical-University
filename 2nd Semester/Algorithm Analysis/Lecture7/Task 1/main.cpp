#include <iostream>

struct Queue {
    int key;
    Queue *next;
} *f = nullptr, *l = nullptr;

void push(int n) {
    Queue *p = l;
    l = new Queue;
    l->key = n;
    l->next = nullptr;
    if (p) {
        p->next = l;
    } else {
        f = l;
    }
}

int pop(int &n) {
    if (f) {
        Queue *p = f;
        n = f->key;
        f = f->next;
        delete(p);
        if (f == nullptr) {
            l = f;
        }
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int n;
    std::cin >> n;
    Queue queue{};

    while (n > 0) {
        push(n);
        std::cin >> n;
    }

    while (pop(n)) {
        std::cout << n;
    }
}