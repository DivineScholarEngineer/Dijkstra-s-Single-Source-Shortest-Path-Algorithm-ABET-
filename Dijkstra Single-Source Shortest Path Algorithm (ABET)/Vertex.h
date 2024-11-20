#ifndef VERTEX_H
#define VERTEX_H

#include <vector>

class Vertex {
private:
    int index;                    // Unique index of the vertex
    int degree;                   // Degree of the vertex
    std::vector<int> neighbors;   // List of neighboring vertex indices

public:
    Vertex();                     // Constructor
    int getIndex() const;         // Get the vertex index (const)
    int getDegree() const;        // Get the vertex degree (const)
    void setIndex(int);           // Set the vertex index
    void setDegree(int);          // Set the vertex degree
    void addNeighbor(int);        // Add a neighbor to the vertex
    const std::vector<int>& getNeighbors() const; // Get neighbors (const)
};

#endif
