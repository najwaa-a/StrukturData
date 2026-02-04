#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
using namespace std;

typedef char infotype;

typedef struct ElmNode *adrNode;
typedef struct ElmEdge *adrEdge;

struct ElmEdge {
    adrNode Node;
    adrEdge Next;
};

struct ElmNode {
    infotype info;
    int visited;
    adrEdge firstEdge;
    adrNode next;
};

struct Graph {
    adrNode first;
};

// basic graph
void createGraph(Graph &G);
void insertNode(Graph &G, infotype x);
adrNode findNode(Graph G, infotype x);
void connectNode(Graph &G, adrNode from, adrNode to);
void printGraph(Graph G);

// traversal
void resetVisited(Graph &G);
void printDFS(Graph G, adrNode N);
void printBFS(Graph G, adrNode N);

#endif
