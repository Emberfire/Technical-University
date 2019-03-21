#include <iostream>

struct ArrayList {
    int key;
    ArrayList *next;
} *start = nullptr;

void print() {
    if (start != nullptr) {
        ArrayList *p = start;
        while (p) {
            std::cout << p->key << ", ";
            p = p->next;
        }
    } else {
        std::cout << "\nList is empty.";
    }
}

void addAtStart(int n) {
    ArrayList *p = start;
    start = new ArrayList;
    start->key = n;
    start->next = p;
}

void add(int n) {
    ArrayList *q = new ArrayList;
    q->key = n;
    q->next = nullptr;

    if (start != nullptr) {
        ArrayList *p = start;
        while (p->next != nullptr) {
            p = p->next;
        }

        p->next = q;
    } else {
        start = q;
    }
}

void addBeforeElement(int n, int k) {
    if (start) {
        ArrayList *p = start;
        while (p->key != k && p->next) {
            p = p->next;
        }

        if (p->key == k) {
            ArrayList *q = new ArrayList;
            q->next = p->next;
            p->next = q;
            p->key = n;
            q->key = k;
        } else {
            std::cout << "\n No k";
        }
    }
}

void addAfterElement(int n, int k) {
    if (start) {
        ArrayList *p = start;
        while (p->key != k && p->next) {
            p = p->next;
        }

        if (p->key == k) {
            ArrayList *q = new ArrayList;
            q->next = p->next;
            p->next = q;
            q->key = n;
        } else {
            std::cout << "\n No k";
        }
    }
}

int removeAtStart(int &n) {
    if (start) {
        n = start->key;
        ArrayList *p = start;
        start = start->next;
        delete (p);
        return 1;
    } else {
        return 0;
    }
}

int remove(int &n) {
    if (start) {
        if (start->next == nullptr) {
            n = start->key;
            delete (start);
            start = nullptr;
        } else {
            ArrayList *p = start;
            ArrayList *q = p;
            while (p->next) {
                q = p;
                p = p->next;
            }

            q->next = nullptr;
            n = p->key;
            delete (p);
        }

        return 1;
    } else {
        return  0;
    }
}

void activeSort(int n) {
    if (start != nullptr && start->key > n) {
        addBeforeElement(n,)
    }
}

int main() {

}