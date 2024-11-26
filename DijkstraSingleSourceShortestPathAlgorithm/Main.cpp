/*
At this stage we have a parser and a graph that succesfully creates an adjacency matrix from the values 
given by the input file.

first call
$ make 
from the command line then 
$ ./dijkstra < /path/to/file.txt
to test


*/

#include "Graph.h"
#include <iostream>

using namespace std;

int main(){

    // start of the initial pipeline that loads the test case file stream from cin

    int numOfVertices;
    int numOfEdges;

    if(!cin.eof()){
        cin >> numOfVertices;
        cin >> numOfEdges;
    }
    else{
        cout<<"Input not found!"<<endl;
        return -1;
    }

    Graph graph(numOfVertices, numOfEdges);

    while(!cin.eof()){
        int startVertice;
        int endVertice;
        cin >> startVertice;
        cin >> endVertice;
        graph.addEdge(startVertice, endVertice);
        
        // Here is where you load up the Graph object
    }

    // And here is where you start working on the three tasks
    graph.printAdjMatrix();

    return 0;
}

