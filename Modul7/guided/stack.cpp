#include "Stack.h"
using namespace std;

// najwa_103122400028

void CreateStack(Stack &S) {
    S.top = Nil;
}

bool isEmpty(Stack S) {
    return S.top == Nil;
}

bool isFull(Stack S) {
    return S.top == MaxEl - 1;
}

void Push(Stack &S, infotype X) {
    if (!isFull(S)) {
        S.top++;
        S.info[S.top] = X;
    } else {
        cout << "Stack is full. Cannot push " << X << endl;
    }
}

infotype pop(Stack &S) {
    infotype x = -999;
    if (!isEmpty(S)) {
        x = S.info[S.top];
        S.top--;
    } else {
        cout << "Stack is empty. Cannot pop." << endl;
    }
    return x;
}

void PrintInfo(Stack S) {
    if (isEmpty(S)) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "[TOP]";
        for (int i = S.top; i >= 0; i--) {
            cout << " " << S.info[i];
        }
        cout << endl;
    }
}

void balikStack(Stack &S) {
    if (!isEmpty(S)) {
        Stack temp1, temp2;
        CreateStack(temp1);
        CreateStack(temp2);

        while (!isEmpty(S)) {
            Push(temp1, pop(S));
        }

        while (!isEmpty(temp1)) {
            Push(temp2, pop(temp1));
        }

        while (!isEmpty(temp2)) {
            Push(S, pop(temp2));
        }
    }
}