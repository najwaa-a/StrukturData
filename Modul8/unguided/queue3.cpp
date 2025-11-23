#include "queue.h"

void createQueue(Queue &Q){
    Q.head = -1;
    Q.tail = -1;
}

bool isEmptyQueue(Queue Q){
    return Q.head == -1;
}

bool isFullQueue(Queue Q){
    return (Q.tail + 1) % MAX_QUEUE == Q.head;
}

void enqueue(Queue &Q, infotype x){
    if (isFullQueue(Q)){
        std::cout << "Queue penuh, enqueue gagal." << std::endl;
    } else {
        if (isEmptyQueue(Q)){
            Q.head = 0;
            Q.tail = 0;
        } else {
            Q.tail = (Q.tail + 1) % MAX_QUEUE;
        }
        Q.info[Q.tail] = x;
    }
}

void dequeue(Queue &Q, infotype &x){
    if (isEmptyQueue(Q)){
        std::cout << "Queue kosong, dequeue gagal." << std::endl;
    } else {
        x = Q.info[Q.head];
        if (Q.head == Q.tail){
            Q.head = -1;
            Q.tail = -1;
        } else {
            Q.head = (Q.head + 1) % MAX_QUEUE;
        }
    }
}

void printInfo(Queue Q){
    std::cout << "H = " << Q.head << " \t| T = " << Q.tail << " \t| Queue Info : ";
    if (isEmptyQueue(Q))
    {
        std::cout << "empty queue";
    } else {
        int i = Q.head;
        while (i != Q.tail)
        {
            std::cout << Q.info[i] << " ";
            i = (i + 1) % MAX_QUEUE;
        }
        std::cout << Q.info[i];
    }
    std::cout << std::endl;
}