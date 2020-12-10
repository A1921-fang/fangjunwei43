#include "queue.h"


//链队列的实现

QNode * initQueue(){
    QNode * queue=(QNode*)malloc(sizeof(QNode));
    queue->next=NULL;
    return queue;
}
QNode* enQueue(QNode * rear,int data){
    QNode * enElem=(QNode*)malloc(sizeof(QNode));
    enElem->data=data;
    enElem->next=NULL;
    rear->next=enElem;
    rear=enElem;
    return rear;
}
QNode* DeQueue(QNode * top,QNode * rear){
    if (top->next==NULL) {
        printf("\n队列为空");
        return rear;
    }
    QNode * p=top->next;
    printf("%d ",p->data);
    top->next=p->next;
    if (rear==p) {
        rear=top;
    }
    free(p);
    return rear;
}
//优先队列

PriQueue * createQueue()
{PriQueue *b=(PriQueue*)malloc(sizeof(PriQueue));
        b->size=0;
        return b;}

int empty(PriQueue *b) {
        return b->size==0;}

void Push(PriQueue *b,int x)
{if (b->size ==maxsize) exit(1);
b->data[b->size++]=x;}



void Pop(PriQueue *b)
{if (empty(b)) exit(1);
        int max = b->data[0],k=0;
        for (int i=1;i<b->size;i++)
                if (b->data[i]>max) {max=b->data[i];k=i;}
            b->data[k] = b->data[b->size-1];
                b->size--;}

int Top(PriQueue *b)
{if(empty(b)) exit(1);
int max = b->data[0],k = 0;
for (int i=1;i<b->size;i++)
if (b->data[i]>max)
max=b->data[i];
return max;}

//双端队列
dqueue *createdeque()
{dqueue *he;
        he=(dqueue*)malloc(sizeof(dqueue));
        he->le=he->ri=he;
        return he;}

int size(dqueue *dq)
{struct Node *p=dq->ri;
        int k=0;
        while (p!=dq) {
                k++;
                p=p->ri;
        }
        return k;}

int Dempty(dqueue *dq)
{return dq->ri==dq;}

int front(dqueue *dq){
        if (Dempty(dq)) exit(1);
        return dq->ri->data;}

int back(dqueue *dq) {
        if (Dempty(dq)) exit(1);
        return dq->le->data;}

void push_front(dqueue *dq,int x) {
struct Node *s=(struct Node*)malloc(sizeof(struct Node));
s->data=x;
s->le=dq;
s->ri=dq->ri;
dq->ri->le=s;
dq->ri=s;}

void push_back(dqueue *d,int y) {
        struct Node *s=(struct Node*)malloc(sizeof(struct Node));
        s->data=y;
        s->ri=d;
        s->le=d->le;
        d->le->ri=s;
        d->le=s;}

void pop_front(dqueue *dq)
{if (Dempty(dq)) exit(1);
        struct Node *p=dq->ri;
        p->ri->le=dq;
        dq->ri=p->ri;
        free(p);}

void pop_back(dqueue *dq)
{if (Dempty(dq)) exit(1);
struct Node *p=dq->le;
p->le->ri=dq;
dq->le=p->le;
free(p);}

void clear(dqueue *dq)
{struct Node *p,*q;
        p=dq->ri;
        while (p !=dq) {
        q=p;
        p=p->ri;
        free(q);}
        dq->le=dq->ri=dq;}

void print(dqueue *dq){
        struct Node *p=dq->ri;
        while (p !=dq)
        {printf("%d ",p->data);
        p=p->ri;}
        printf("\n");
}
