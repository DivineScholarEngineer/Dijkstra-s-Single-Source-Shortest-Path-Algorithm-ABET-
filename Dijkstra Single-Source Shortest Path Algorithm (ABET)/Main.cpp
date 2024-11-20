#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm> // For std::max
#include "Vertex.h"
#include "Edge.h"

int main() {
    // Open the input file
    std::ifstream inputFile("eco-florida.txt");
    if (!inputFile) {
        std::cerr << "Error: Could not open input file." << std::endl;
        return 1;
    }

    // Declare data structures
    std::vector<Vertex> vertices;
    std::vector<Edge> edges;

    // Variables for reading file content
    int src, dest, weight;

    // Read the file line by line
    while (inputFile >> src >> dest >> weight) {
        // Debugging output
        std::cout << "Processing edge: " << src << " -> " << dest << " with weight " << weight << std::endl;

        // Ensure the vertices vector can accommodate the largest vertex index
        while (vertices.size() <= std::max(src, dest)) {
            Vertex newVertex;
            newVertex.setIndex(vertices.size());
            vertices.push_back(newVertex);
        }

        // Add an edge to the source vertex's adjacency list
        vertices[src].addNeighbor(dest);

        // Store the edge information
        edges.emplace_back(src, dest, weight);
    }

    inputFile.close();

    // Output graph summary
    std::cout << "Graph constructed successfully!" << std::endl;
    std::cout << "Number of vertices: " << vertices.size() << std::endl;
    std::cout << "Number of edges: " << edges.size() << std::endl;

    // Example of traversing and printing adjacency list
    for (const auto& vertex : vertices) {
        std::cout << "Vertex " << vertex.getIndex() 
                  << " (degree: " << vertex.getDegree() << ") has neighbors: ";
        for (const auto& neighbor : vertex.getNeighbors()) {
            std::cout << neighbor << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
