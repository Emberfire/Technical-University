#include <iostream>

struct Queue {
    int key;
    Queue *next;
} *f1 = nullptr, *f2 = nullptr, *l1 = nullptr, *l2 = nullptr;

void push(int n, Queue *f, Queue *l) {
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

int pop(int &n, Queue *f, Queue *l) {
    if (f) {
        Queue *p = f;
        n = f->key;
        f = f->next;
        delete(p);
        if (f == nullptr) {
            *l = f;
        }
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int n;
    std::cin >> n;
    Queue queue1{};
    Queue queue2{};

    while (n != 0) {
        if (n % 2 == 0) {
            push(n, f1, l1);
            std::cin >> n;
        } else {
            push(n, f2, l2);
            std::cin >> n;
        }


    }

    while (pop(n, f1, l1)) {
        std::cout << n;
    }
    std::cout << "\n";
    while (pop(n, f2, l2)) {
        std::cout << n;
    }
}