#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Graph {
    int V; // number of vertices
    vector<vector<int>> adj; // adjacency list

public:
    Graph(int vertices) {
        V = vertices;
        adj.resize(V);
    }

    // Add edge between vertices
    void addEdge(int v, int w) {
        adj[v].push_back(w);
    }

    // BFS traversal
    void BFS(int startVertex) {
        // Mark all vertices as not visited
        vector<bool> visited(V, false);

        // Create a queue for BFS
        queue<int> q;

        // Mark the current vertex as visited and enqueue it
        visited[startVertex] = true;
        q.push(startVertex);

        while (!q.empty()) {
            // Dequeue a vertex from queue and print it
            startVertex = q.front();
            cout << startVertex << " ";
            q.pop();

            // Get all adjacent vertices of the dequeued vertex
            // If an adjacent has not been visited, then mark it visited
            // and enqueue it
            for (auto adjacent : adj[startVertex]) {
                if (!visited[adjacent]) {
                    visited[adjacent] = true;
                    q.push(adjacent);
                }
            }
        }
    }
};

int main() {
    // Create a graph with 6 vertices
    Graph g(6);

    // Add edges
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 4);
    g.addEdge(3, 5);
    g.addEdge(4, 5);

    cout << "BFS starting from vertex 0: ";
    g.BFS(0);

    return 0;
}
