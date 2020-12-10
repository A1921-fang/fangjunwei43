#ifndef queue_h
#define queue_h
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>

typedef struct QNode{
            int data;
                struct QNode * next;
}QNode;
#define  maxsize 100
typedef struct PriQueue{
        int data [maxsize];
        int size;
}PriQueue;


typedef struct Node{
        int data;
        struct Node *le,*ri;
}dqueue;

//链队列的实现
QNode * initQueue();

QNode* enQueue(QNode * rear,int data);

QNode* DeQueue(QNode * top,QNode * rear);

//优先队列


PriQueue* createQueue();

int Empty(PriQueue *b);

void Push(PriQueue *b,int x);

void Pop(PriQueue *b);

int Top(PriQueue *b);

//双端队列

dqueue* createdeque();

int Dsize(dqueue *dq);

int Dempty(dqueue *dq);

int front(dqueue *dq);

int back(dqueue *dq);

void push_front(dqueue *dq,int x);

void push_back(dqueue *dq,int y);

void pop_front(dqueue *dq);

void pop_back(dqueue *dq);

void clear(dqueue *dq);

void print(dqueue *dq);

#endif
