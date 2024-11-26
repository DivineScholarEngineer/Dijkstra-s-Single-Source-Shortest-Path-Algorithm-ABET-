#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <cstring> // For memset

class Graph {
private:
    int numVertices;        // Number of vertices in the graph
    int numEdges;           // Number of edges in the graph
    int** adjMatrix;        // Pointer to the adjacency matrix

public:
    // Constructor: initializes a graph with the given number of vertices and edges
    Graph(int vertices, int edges);

    // Destructor: releases allocated memory for the adjacency matrix
    ~Graph();

    // Adds an edge between the given source and destination vertices
    void addEdge(int src, int dest);

    // Prints the adjacency matrix of the graph
    void printAdjMatrix();
};

#endif // GRAPH_H
