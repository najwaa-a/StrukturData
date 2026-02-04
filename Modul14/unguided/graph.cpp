#include "graph.h"

void createGraph(Graph &G) {
    G.first = NULL;
}

void insertNode(Graph &G, infotype x) {
    adrNode P = new ElmNode;
    P->info = x;
    P->visited = 0;
    P->firstEdge = NULL;
    P->next = NULL;

    if (G.first == NULL) {
        G.first = P;
    } else {
        adrNode Q = G.first;
        while (Q->next != NULL) {
            Q = Q->next;
        }
        Q->next = P;
    }
}

adrNode findNode(Graph G, infotype x) {
    adrNode P = G.first;
    while (P != NULL) {
        if (P->info == x) {
            return P;
        }
        P = P->next;
    }
    return NULL;
}

// graph berarah (from -> to)
void connectNode(Graph &G, adrNode from, adrNode to) {
    if (from != NULL && to != NULL) {
        adrEdge E = new ElmEdge;
        E->Node = to;
        E->Next = from->firstEdge;
        from->firstEdge = E;
    }
}

void printGraph(Graph G) {
    adrNode P = G.first;
    while (P != NULL) {
        cout << P->info << " -> ";
        adrEdge E = P->firstEdge;
        while (E != NULL) {
            cout << E->Node->info << " ";
            E = E->Next;
        }
        cout << endl;
        P = P->next;
    }
}

void resetVisited(Graph &G) {
    adrNode P = G.first;
    while (P != NULL) {
        P->visited = 0;
        P = P->next;
    }
}

// DFS
void printDFS(Graph G, adrNode N) {
    if (N == NULL) return;

    cout << N->info << " ";
    N->visited = 1;

    adrEdge E = N->firstEdge;
    while (E != NULL) {
        if (E->Node->visited == 0) {
            printDFS(G, E->Node);
        }
        E = E->Next;
    }
}

// BFS
void printBFS(Graph G, adrNode N) {
    if (N == NULL) return;

    adrNode queue[100];
    int front = 0, rear = 0;

    queue[rear++] = N;
    N->visited = 1;

    while (front < rear) {
        adrNode P = queue[front++];
        cout << P->info << " ";

        adrEdge E = P->firstEdge;
        while (E != NULL) {
            if (E->Node->visited == 0) {
                E->Node->visited = 1;
                queue[rear++] = E->Node;
            }
            E = E->Next;
        }
    }
}
