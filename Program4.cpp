#include <iostream>
#include <vector>

using namespace std;

class Graph {
private:
    int numVertices;
    vector<vector<int>> adjLists;
    vector<bool> visited;

public:
    Graph(int vertices) {
        numVertices = vertices;
        adjLists.resize(vertices);
        visited.resize(vertices, false);
    }

    void addEdge(int src, int dest) {
        adjLists[src].push_back(dest);
        adjLists[dest].push_back(src); // for undirected graph
    }

    void DFS(int vertex) {
        visited[vertex] = true;
        cout << "Visited " << vertex << endl;

        for (int adjVertex : adjLists[vertex]) {
            if (!visited[adjVertex]) {
                DFS(adjVertex);
            }
        }
    }

    void displayGraph() {
        for (int i = 0; i < numVertices; i++) {
            cout << "Adjacency list of vertex " << i << ": ";
            for (int j : adjLists[i]) {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph graph(5);

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);

    graph.displayGraph();

    cout << "Depth First Traversal: " << endl;
    graph.DFS(0);

    return 0;
}