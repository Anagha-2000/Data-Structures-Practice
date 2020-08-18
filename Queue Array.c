#include<stdio.h>
#define size 5

typedef struct queue
{
    int a[size];
    int rear;
    int front;
}Queue;

void init(Queue *p)
{
    p->rear=-1;
    p->front=size-1;
}

void addQ(Queue *p, int n)
{
    
    if(p->rear == size-1)
    {
        printf("full");
        return;
    }

    else{
        p->a[++p->rear]=n;
    }
}

void deQ(Queue *p)
{
    int n;
    if(p->front == p->rear){
        printf("empty");
    exit(0);
    }
    else{
        n=p->a[++p->front];
      
        printf("removed element = %d", n);
    }
}

void display(Queue *p)
{
    int i;
    i=p->front;

    while(i!=p->rear)
    {
        printf("%d\t",p->a[i]);
        i++;
    }
}

int main()
{
    Queue x;
   
    init(&x);

    addQ(&x,5);
    addQ(&x,6);
    addQ(&x,7);

    deQ(&x);
  
	
	return 0;
}

