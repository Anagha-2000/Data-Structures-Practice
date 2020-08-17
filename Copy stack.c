#include<stdio.h>
# define size 100

typedef struct stack1{
	int top1;
	int a[size];
}Stack_1;

typedef struct stack2{
	int top2;
	int b[size];
}Stack_2;

void init_1(Stack_1 *p)
{
	p->top1=-1;
}

void push_1(Stack_1 *p,int v)
{
	if(p->top1 == size-1)
	{
		printf("stack is full\n");
		return;
	}
	
	else{
		p->top1+=1;
		p->a[p->top1]=v;
	}
}

int pop_1(Stack_1 *p){
	if(p->top1 == -1){
		printf("stack is empty\n");
		return 0;
	}
	
	else{
		return p->a[p->top1--];
	}
}

char peek_1(Stack_1 *p)
{
	if(p->top1 == -1)
		return 1;
	else{
		return p->a[p->top1];
	}
}

int empty_1(Stack_1 *p)
{
	if(p->top1 == -1)
		return 1;
	else
		return 0;
}

void init_2(Stack_2 *p)
{
	p->top2=-1;
}

void push_2(Stack_2 *p,int v)
{
	if(p->top2 == size-1)
	{
		printf("stack is full\n");
		return;
	}
	
	else{
		p->top2+=1;
		p->b[p->top2]=v;
	}
}

int pop_2(Stack_2 *p){
	if(p->top2 == -1){
		printf("stack is empty\n");
		return 0;
	}
	
	else{
		return p->b[p->top2--];
	}
}

char peek_2(Stack_2 *p)
{
	if(p->top2 == -1)
		return 1;
	else{
		return p->b[p->top2];
	}
}

int empty_2(Stack_2 *p)
{
	if(p->top2 == -1)
		return 1;
	else
		return 0;
}

int main()
{
	Stack_1 s;
	init_1(&s);
	
	Stack_2 t;
	init_2(&t);
	
	push_1(&s,5);
	push_1(&s,6);
	push_1(&s,7);
	push_1(&s,8);
	push_1(&s,9);
	push_1(&s,10);
	
	push_2(&t,pop_1(&s));
	push_2(&t,pop_1(&s));
	push_2(&t,pop_1(&s));
	push_2(&t,pop_1(&s));
	push_2(&t,pop_1(&s));
	push_2(&t,pop_1(&s));
	
	printf("%d\t",pop_2(&t));
	printf("%d\t",pop_2(&t));
	printf("%d\t",pop_2(&t));
	printf("%d\t",pop_2(&t));
	printf("%d\t",pop_2(&t));
	printf("%d\t",pop_2(&t));
}
