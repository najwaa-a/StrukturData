#include <iostream>
#include "queue.h"
#include "queue3.cpp"

int main()
{
    std::cout << "Hello world" << "<< endl;" << std::endl;

    Queue Q;
    infotype x;

    createQueue(Q);

    std::cout << "----------------------------------" << "<<endl;" << std::endl;
    std::cout << "H - T \t| Queue info" << "<<endl;" << std::endl;
    std::cout << "----------------------------------" << "<<endl;" << std::endl;

    printInfo(Q);
    enqueue(Q, 5);
    printInfo(Q);

    enqueue(Q, 2);
    printInfo(Q);

    enqueue(Q, 7);
    printInfo(Q);

    dequeue(Q, x);
    printInfo(Q);
    std::cout << "   -> Nilai yang di-dequeue: " << x << std::endl;

    dequeue(Q, x);
    printInfo(Q);
    std::cout << "   -> Nilai yang di-dequeue: " << x << std::endl;

    dequeue(Q, x);
    printInfo(Q);
    std::cout << "   -> Nilai yang di-dequeue: " << x << std::endl;

    dequeue(Q, x);
    printInfo(Q);
    std::cout << "   -> Nilai yang di-dequeue: " << x << std::endl;

    return 0;
}