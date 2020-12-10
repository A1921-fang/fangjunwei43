#include "queue.h"

int main ()
{
    QNode * queue,*top,*rear;
    queue=top=rear=initQueue();
    rear=enQueue(rear, 1);
    rear=enQueue(rear, 2);
    rear=enQueue(rear, 3);
    rear=enQueue(rear, 4);
    rear=DeQueue(top, rear);
    rear=DeQueue(top, rear);
    rear=DeQueue(top, rear);
    rear=DeQueue(top, rear);
    rear=DeQueue(top, rear);

PriQueue *b=createQueue();
        srand(time(0));
        printf("将8个随机数加入优先队列：\n");
        for (int i=0;i<8;i++)
        {int t= rand() %100;
                printf("%d ", t);
                Push(b, t);}
        printf("\n");
        printf("出队顺序:  \n");
        while (!empty(b))
        {printf("%d ", Top(b));
        Pop(b);}



dqueue*dq=createdeque();
push_back(dq,11);
push_front(dq,22);
push_back(dq,33);
push_front(dq,44);
push_front(dq,55);
pop_back(dq);
print(dq);



return 1;
}
