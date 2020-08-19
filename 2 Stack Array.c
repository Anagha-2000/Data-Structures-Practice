#include<stdio.h>
#define size 10

typedef struct stack{
    int a[size];
    int top1,top2;
}Stack;

void init(Stack *p)
{
    p->top1=-1;
    p->top2=size;
}

void push1(Stack *p,int v)
{
    if(p->top1 == p->top2)
    {
        printf("stack overflows\n");
        
    }

    else{
        p->top1+=1;
        p->a[p->top1]=v;
    }
}

void push2(Stack *p,int v)
{
    if(p->top1 == p->top2)
    {
        printf("stack overflows\n");
        
    }

    else{
        p->a[--p->top2]=v;
    }
}

int pop1(Stack *p)
{
    if(p->top1 == -1)
    {
        if(p->top2 == size)
        {
            printf("Stack underflows\n");
        }

        else{
            pop2(&p);
        }
    }

    else{
        return p->a[p->top1--];
    }
}

int pop2(Stack *p)
{
    if(p->top2 == size)
    {
        if(p->top1 == -1)
        {
            printf("Stack underflows\n");
        }

        else{
            pop1(&p);
        }
    }

    else{
        return p->a[p->top2--];
    }
}

void main()
{
    Stack s;
    init(&s);
    int i,n;

    for(i=0;i<=size;i++)
    {
        printf("enter a no.\n");
        scanf("%d",&n);
        push1(&s,n);
    }

   printf("%d\n", pop1(&s));
    printf("%d\n",pop2(&s));
   
   printf("%d\n", pop1(&s));
    printf("%d\n",pop2(&s));

   printf("%d\n", pop1(&s));
    printf("%d\n",pop2(&s));
    
   printf("%d\n", pop1(&s));
    printf("%d\n",pop2(&s));
    
   printf("%d\n", pop1(&s));
    printf("%d\n",pop2(&s));
    
   printf("%d\n", pop1(&s));
    printf("%d\n",pop2(&s));
}
