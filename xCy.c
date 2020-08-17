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

int check(char a, char b)
{
	if(a==b)
	return 1;
	else
	return 0;
}
int main()
{
	Stack s;
	char b[100];
	
	init(&s);
	int i,j,flag=1;
	char t;
	
	printf("enter the expression\n");
	scanf("%s",b);
	
	for(i=0;b[i] != 'C';i++)
	{
		push(&s,b[i]);
	}	
	i++;
	
	while(b[i] != '\0')
	{
		t=pop(&s);
		
		if(b[i] != t){
			flag=1;
    		break;
		}	
		else
  {
   flag=0;
  }
  i++;
 }
	
	
	
	
	if(!flag)
	printf("valid\n");
	else
	printf("not valid\n");
	
	return 0;
}
