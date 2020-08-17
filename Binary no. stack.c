#include<stdio.h>
# define size 32

typedef struct stack{
	int top;
	int a[size];
}Stack;

void init(Stack *p)
{
	p->top=-1;
}

void push(Stack *p,int v)
{
	if(p->top == size-1)
	{
		printf("stack is full\n");
		return 0;
	}
	
	else{
		p->top+=1;
		p->a[p->top]=v;
	}
}

int pop(Stack *p){
	if(p->top == -1){
		printf("stack is empty\n");
		return 0;
	}
	
	else{
		return p->a[p->top--];
	}
}

int empty(Stack *p)
{
	if(p->top == -1)
		return 1;
	else
		return 0;
}

int main()
{
	Stack s;
	int n;
	int d;
	
	init(&s);
	
	printf("enter the no.\n");
	scanf("%d",&n);
	
	while(n!=0){
		d=n%2;
		push(&s,d);
		n/=2;
	}
	
	while (!empty(&s))
	{
		printf("%d\t",pop(&s));
	}
	
	return 0;
}

