#ifndef queue_h
#define queue_h
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef int dataType;
typedef struct node{
    dataType data;
    struct node *left, *right;
} Deque;
//void initQueue(LinkQueue *q);
//int Empty(LinkQueue *q);
//void push(LinkQueue *q, dataType x);
//void pop(LinkQueue *q);
//dataType fornt(LinkQueue *q);
//dataType back(LinkQueue *q);
//int size(LinkQueue* q);
Deque* createDeque();
int size(Deque *dq);
int empty(Deque *dq);
dataType front(Deque *dq);
void push_front(Deque *dq, dataType x);
void push_back(Deque *dq, dataType x);
void pop_front(Deque *dq);
void pop_back(Deque *dq);
void clear(Deque *dq);
void print(Deque *dq);
dataType back(Deque *dq);
#endif

