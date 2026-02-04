#include "graph.h"
#include "graph.cpp"

int main() {
    Graph G;
    createGraph(G);

    insertNode(G, 'A');
    insertNode(G, 'B');
    insertNode(G, 'C');
    insertNode(G, 'D');
    insertNode(G, 'E');
    insertNode(G, 'F');
    insertNode(G, 'G');
    insertNode(G, 'H');

    adrNode A = findNode(G, 'A');
    adrNode B = findNode(G, 'B');
    adrNode C = findNode(G, 'C');
    adrNode D = findNode(G, 'D');
    adrNode E = findNode(G, 'E');
    adrNode F = findNode(G, 'F');
    adrNode Gg = findNode(G, 'G');
    adrNode H = findNode(G, 'H');

    connectNode(G, A, B);
    connectNode(G, A, C);
    connectNode(G, B, D);
    connectNode(G, B, E);
    connectNode(G, C, F);
    connectNode(G, C, Gg);
    connectNode(G, D, H);
    connectNode(G, E, H);
    connectNode(G, F, H);
    connectNode(G, Gg, H);
    connectNode(G, H, A);

    cout << "Adjacency List:\n";
    printGraph(G);

    cout << "\nDFS dari A: ";
    resetVisited(G);
    printDFS(G, A);

    cout << "\nBFS dari A: ";
    resetVisited(G);
    printBFS(G, A);

    cout << endl;
    return 0;
}
