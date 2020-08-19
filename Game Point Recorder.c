#include<stdio.h>
#include<ctype.h>
#define size 50
typedef struct stack
{
    int a[size];
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
        printf("stack overflows\n");
    }

    else{
        p->a[++p->top]=v;
    }
}

int pop(Stack *p)
{
    if(p->top == -1)
    {
        printf("stack underflows\n");
    }

    else{
        return p->a[p->top--];
    }
}

int peek(Stack *p)
{
    return p->top;
}

int sum(Stack *p)
{
	int s=0;
	while(p->top!=-1)
	{
		s+=p->a[p->top--];

	}
	return s;
}
void points(char a[],int n)
{
    Stack s;
    init(&s);
    int i,temp1,temp2;
    

    for(i=0;i<n;i++)
    {
        if(isdigit(a[i]))
            
            push(&s,(int)(a[i]));
        
        else{
        
        if(a[i] == 'C')
            temp1=pop(&s);
        
        else if(a[i] == 'D'){
            temp1=pop(&s);
            push(&s,(temp1*temp1));
        }

        else if(a[i] == '+')
        {
            temp1=pop(&s);
            temp2=pop(&s);

            push(&s,(temp1+temp2));

        }
        }

    }

    
printf("points = %d",sum(&s));
}

void main()
{
    char a[]={'5','-2','4','C','D','9','+','+'};
    int i,n,p;

   

    points(a,n);
    
}