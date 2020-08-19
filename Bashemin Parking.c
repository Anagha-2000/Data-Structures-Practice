#include<stdio.h>
#define size 10

typedef struct stack{
    char a[size];
    int top;
}Stack;

void init(Stack *p)
{
    p->top=-1;
}

void push(Stack *p,char v)
{
    if(p->top == size-1)
    {
        printf("Lane is full. Car cannot enter\n");
    }
    else{
        p->top+=1;
        p->a[p->top]=v;
    }
} 

int pop(Stack *p)
{
    int i,c=0;
    if(p->top != -1 && p->a[p->top] == "D")
    {   
        for(i=p->top-1;i>-1;i--)
            {
                if(p->a[i] == "D")
                    c++;
            } 
    }
    p->top--;
    return c;
}

char peek(Stack *p)
{
    return p->a[p->top];
}

void main()
{
    char car[size][2];
    Stack s;
    init(&s);
    int i,j,n;

    for(i=0;i<=size;i++)
    {
        printf("enter the car details\n");
        scanf("%s",&car[i][0]);
        scanf("%s",&car[i][1]);

        push(&s,car[i][0]);       
        
    }

    for(i=0;i<size;i++)
    {
        n=pop(&s);
        printf("The car no. %s was moved out %d to allow other cars to depart.\n",car[i][1],n);
    
}



}

