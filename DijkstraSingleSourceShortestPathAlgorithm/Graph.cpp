#include <iostream>
#include <cstring>  // For memset

#include "Graph.h"

using namespace std;


    int numVertices;
    int numEdges;
    int **adjMatrix;

    // Constructor
    Graph::Graph(int vertices, int edges) {
        numVertices = vertices;
        numEdges = edges;

        // Allocate memory for adjacency matrix
        adjMatrix = new int*[numVertices];
        for (int i = 0; i < numVertices; i++) {
            adjMatrix[i] = new int[numVertices];
            memset(adjMatrix[i], 0, numVertices * sizeof(int)); //efficiently fill the adacency matrix with zeros
        }
    }

    // Destructor
    Graph::~Graph() {
        for (int i = 0; i < numVertices; i++) {
            delete[] adjMatrix[i];
        }
        delete[] adjMatrix;
    }

    // Add edge to the graph
    void Graph::addEdge(int src, int dest) {
        if (src-1 >= 0 && src-1 < numVertices &&
            dest-1 >= 0 && dest-1 < numVertices) {
            adjMatrix[src-1][dest-1] = 1;
            adjMatrix[dest-1][src-1] = 1;  // For undirected graph
        } else {
            cout << "Error: Invalid vertex number." << endl;
        }
    }

    // Print the adjacency matrix
    void Graph::printAdjMatrix() {
        cout << "The adjacency matrix of G:" << endl;
        for (int i = 0; i < numVertices; i++) {
            for (int j = 0; j < numVertices; j++) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }


