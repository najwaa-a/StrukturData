#ifndef STACK_H
#define STACK_H

// najwa_103122400028

typedef int infotype; // ini buat ngedefinisiin tipe data elemen stack nya

typedef struct { 
    infotype info[20];
    int top;
} Stack;

void createStack(Stack &S);
void push(Stack &S, infotype x);
void pop(Stack &S);
void printInfo(Stack S);
void balikStack(Stack &S);

#endif