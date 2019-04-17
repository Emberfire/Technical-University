#include <iostream>
#include <vector>

using namespace std;

struct Path {
    int Dest;
    int Cost;
    int Time;

    Path(int Dest, int Cost, int Time):Dest(Dest), Cost(Cost), Time(Time){};
};

struct Graph {
    int V;
    vector<Path> *adj;

    Graph(int V);
    void AddEdge(int S, int D, int C, int T);


};

Graph::Graph(int V) : V(V) {
    this->adj = new vector<Path>[V];
}

void Graph::AddEdge(int S, int D, int C, int T) {
    adj[S].push_back(Path(D, C, T));
}

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        int m;
        int k;

        std::cin >> n >> m >> k;
        for (int j = 0; j < m; j++) {
            //From to cost time

        }
    }
}