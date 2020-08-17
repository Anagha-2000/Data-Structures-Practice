#include<stdio.h>
# define size 100

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

char peek(Stack *p)
{
	if(p->top == -1)
		return '/0';
	else{
		return p->a[p->top];
	}
}

int empty(Stack *p)
{
	if(p->top == -1)
		return 1;
	else
		return 0;
}

int check(char a, char b){
	if (a==']' && b=='[')
		return 1;
	else if(a==')' && b=='(')
		return 1;
	else if(a=='}' && b=='{')
		return 1;
	return 0;
}

int main()
{
	Stack s;
	char b[100];
	
	init(&s);
	int i,flag=1;
	
	printf("enter the expression\n");
	scanf("%s",b);
	
	for(i=0;b[i];i++)
	{
		if(b[i] =='(' || b[i] == '{' || b[i] == '[')
			push(&s,b[i]);
		if(b[i] == ')'|| b[i] == '}' || b[i] == ']')
		{
			if(check(b[i],peek(&s))){
				if(!empty(&s))
					pop(&s);
				else{
					flag=0;
					break;
				}
			}
			
			else{
				printf("invalid expression\n");
			}
		}
	}
	
	if(flag == 0 || !empty(&s))
		printf("unbalanced equation\n");
	else
		printf("balanced equation\n");
		
	return 0;
}
