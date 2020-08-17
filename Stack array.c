#include<stdio.h>
# define size 5

struct stack{
	int top;
	int a[size];
};

int isempty(struct stack *p)
{
	return (p->top == -1);
}

int isfull(struct stack *p)
{
	return (p->top == size-1);
}

void push(struct stack *p, int v)
{
	if (p->top == size-1){
		printf("stack is full\n");
		return 0;
	}
	else
		p->a[++p->top]=v;
}

int pop(struct stack *p)
{
	if (p->top == -1){
		printf("stack is empty\n");
		return 0;
	}
	else
		return(p->a[p->top--]);
}

void main()
{
	struct stack s;
	s.top=-1;
	push(&s,5);
	push(&s,6);
	push(&s,7);
	push(&s,8);
	push(&s,9);
	push(&s,10);
	
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
}
