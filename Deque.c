#include<stdio.h>
#define size 10

typedef struct queue
{
    int a[size];
    int rearLeft, rearRight, frontLeft, frontRight;
}deque;

void init(deque *p)
{
    p->rearLeft = -1;
    p->rearRight = size;
    p->frontLeft = -1;
    p->frontRight = size;
        
}


void addLeft(deque *p,int v)
{
    if (p->rearLeft+1 == p->rearRight)
    {
        printf("deque is full\n");
    }

    else{
        p->a[++p->rearLeft] = v;
    }
}

void addRight(deque *p,int v)
{
    if(p->rearLeft+1 == p->rearRight)
        printf("deque is full\n");

    else{
       p->a[--p->rearRight] = v;
    }
}

int remRight(deque *p)
{
    if(p->frontRight == p->rearRight)
    {
        printf("deque is empty\n");
        return 0;
    }
    
    else{
        return p->a[--p->frontRight];
    }
}

int remLeft(deque *p)
{
    if(p->frontLeft == p->rearLeft)
    {
        printf("deque is empty\n");
        return 0;
    }
        
    
    else{
        return p->a[++p->frontLeft];
    }
}


int main()
{
    deque x;
    init(&x);

    addLeft(&x,10);
    addLeft(&x,20);
    addLeft(&x,30);
    addLeft(&x,40);
    addLeft(&x,50);

    remLeft(&x);
    remLeft(&x);
    remLeft(&x);
    remLeft(&x);
    remLeft(&x);

    addRight(&x,11);
    addRight(&x,12);
    addRight(&x,13);
    addRight(&x,14);
    addRight(&x,15);

    printf("\n");

   remRight(&x);
     remRight(&x);
       remRight(&x);
         remRight(&x);
           remRight(&x);

    return 0;

}