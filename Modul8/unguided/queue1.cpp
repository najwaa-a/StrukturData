#include "queue.h"

void createQueue(Queue &Q){
    Q.head = -1;
    Q.tail = -1;
}

bool isEmptyQueue(Queue Q){
    return Q.head == -1;
}

bool isFullQueue(Queue Q){
    return Q.tail == MAX_QUEUE - 1;
}

void enqueue(Queue &Q, infotype x){
    if (isFullQueue(Q)){
        std::cout << "Queue penuh, enqueue gagal." << std::endl;
    }
    else{
        if (isEmptyQueue(Q)){
            Q.head = 0;
        }
        Q.tail++;
        Q.info[Q.tail] = x;
    }
}

void dequeue(Queue &Q, infotype &x){
    if (isEmptyQueue(Q)){
        std::cout << "Queue kosong, dequeue gagal." << std::endl;
    } else{
        x = Q.info[Q.head];
        for (int i = Q.head; i < Q.tail; i++) {
            Q.info[i] = Q.info[i + 1];
        }
        Q.tail--;
        if (Q.tail < Q.head){
            Q.head = -1;
            Q.tail = -1;
        }
    }
}

void printInfo(Queue Q) {
    std::cout << "H = " << Q.head << " \t| T = " << Q.tail << " \t| Queue Info : ";
    if (isEmptyQueue(Q)){
        std::cout << "empty queue";
    } else {
        for (int i = Q.head; i <= Q.tail; i++){
            std::cout << Q.info[i] << " ";
        }
    } 
    std::cout << std::endl;
}