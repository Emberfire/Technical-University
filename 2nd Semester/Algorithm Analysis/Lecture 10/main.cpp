#include <iostream>

struct Tree {
    int key;
    Tree *left;
    Tree *right;
} *root = nullptr;

void insert(int n, Tree *&current);

void print(Tree *current, int h);

int main() {
    int number;
    std::cout << "Enter a number or enter 0 to stop the program: ";
    std::cin >> number;

    while (number != 0) {
        insert(number, root);

        std::cout << "Enter a number or enter 0 to stop the program: ";
        std::cin >> number;
    }

    Tree *a = root;
    print(root, 0);
}

void insert(int n, Tree *&current) {
    if (current) {
        if (n < current->key) {
            insert(n, current->left);
        } else if (n > current->key) {
            insert(n, current->right);
        }
    } else {
        current = new Tree;
        current->key = n;
        current->left = nullptr;
        current->right = nullptr;
    }
}

void print(Tree *current, int h) {
    if (current) {
        if (current->left) {
            print(current->left, h + 1);
            std::cout << current->key << "\n";
        } else if (current->right) {
            print(current->right, h + 1);
            std::cout << current->key << "\n";
        } else {
            std::cout << current->key << "\n";
        }
    }
}