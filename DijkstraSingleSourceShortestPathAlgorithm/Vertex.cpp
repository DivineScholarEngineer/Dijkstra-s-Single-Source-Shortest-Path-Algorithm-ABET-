#include "Vertex.h"

// Constructor: Initialize the vertex with default values
Vertex::Vertex() {
    this->index = -1;
    this->degree = 0; // Start with degree 0
}

// Getter for the vertex index
int Vertex::getIndex() {
    return this->index;
}

// Getter for the vertex degree
int Vertex::getDegree() {
    return this->degree;
}

// Setter for the vertex index
void Vertex::setIndex(int index) {
    this->index = index;
}

// Setter for the vertex degree
void Vertex::setDegree(int deg) {
    this->degree = deg;
}

// Add a neighbor to the vertex
void Vertex::addNeighbor(int neighbor) {
    neighbors.push_back(neighbor); // Add the neighbor to the list
    degree++;                      // Increase the degree
}

// Get the list of neighbors (read-only)
const std::vector<int>& Vertex::getNeighbors() {
    return neighbors;
}
