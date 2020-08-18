#include<stdio.h>
#define size 5

typedef struct queue
{
    int a[size];
    int rear,front;
}Queue;

void init(Queue *p){
    p->rear=0;
    p->front=0;
}

int isEmpty(Queue *p)
{
    if(p->front == p->rear)
        return 1;
    else
    {
        return 0;
    }
}

void insertQ(Queue *p, int v)
{
    int t;
    t=(p->rear+1)%size;
    if(t==p->front)
    {
        printf("overflow\n");
    }
    else{
        p->rear=t;
        p->a[p->rear]=v;
    }
}

int removeQ(Queue *p)
{
    if(isEmpty(p))
    {
        printf("queue underflow\n");
        exit(0);
    }
    else{
        p->front=(p->front+1)%size;
        return (p->a[p->front]);
    }
}

void main()
{
    Queue q;
    init(&q);
    int n;

    insertQ(&q,7);
    insertQ(&q,8);
    insertQ(&q,9);
    insertQ(&q,10);
    insertQ(&q,11);
    printf("%d", removeQ(&q));

}