#include <iostream>

const int n = 10;

struct Graph {
    char key;
    Graph *next;
} *graph[n];

void initialize(Graph *graph[n]);

int searchNode(char node, Graph *graph[n]);

int searchArc(char firstNode, char secondNode, Graph graph[n]);

void addNode(char node, Graph *graph);

int main() {

}

void initialize(Graph *graph[n]) {
    for (int i = 0; i < n; i++) {
        graph[i] = nullptr;
    }
}

int searchNode(char node, Graph *graph[n]) {
    for (int i = 0; i < n; i++) {
        if (graph[i]) {
            if (graph[i]->key == node) {
                return 1;
            }
        }
    }

    return 0;
}

int searchArc(char firstNode, char secondNode, Graph *graph[n]) {
    if (searchNode(firstNode, graph) && searchNode(secondNode, graph)) {
        int i = 0;
        while (graph[i] == nullptr || graph[i]->key != firstNode) {
            i++;
        }

        Graph *temp = graph[i];
        while (temp->key != secondNode && temp->next) {
            temp = temp->next;
        }

        if (temp->key == secondNode) {
            return 1;
        }
    }

    return 0;
    //for (int i = 0; i < n; i++) {
    //    if (graph[i] && graph[i]->key == firstNode) {
    //        if (graph[i]->next && graph[i]->next->key == secondNode) {
    //            return 1;
    //        }
    //    }
    //}
//
    //return 0;
}

void addNode(char node, Graph *graph[n]) {
    if (!searchNode(node, graph)) {
        int i = 0;
        while (graph[i] && i < n) {
            i++;
        }

        if (graph[i] == nullptr) {
            graph[i] = new Graph;
            graph[i]->key = node;
            graph[i]->next = nullptr;
        } else {
            std::cout << "Overflow!";
        }
    }
}

void addArc(char firstNode, char secondNode, Graph *graph[n]) {

}