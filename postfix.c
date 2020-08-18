#include<stdio.h>
#include<ctype.h>
#define size 100

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
		p->top+=1;
		p->a[p->top]=v;

}

int pop(Stack *p){
	
		return p->a[p->top--];
	
}

char peek(Stack *p)
{
	
	return p->a[p->top];

}

int empty(Stack *p)
{
	if(p->top == -1)
		return 1;
	else
		return 0;
}

int preced(char op)
{
	switch(op){
		case '/':
		case '*':
		case '%':
			return 2;
		
		case '+':
		case '-':
			return 1;

		case '(':
		case ')':
			return 0;
	}
	return 3;
}

void infixToPostfix(char in[],char post[]){
	Stack s;
	init(&s);

	int i,j=0;

	for(i=0;in[i];i++)
	{
		if(isalnum(in[i]))
			post[j++]=in[i];
		else
			if(in[i] == '(' )
				push(&s,in[i]);
		
			else 
				if(in[i] == ')')
			
					while(peek(&s) != '(')
						post[j++] = pop(&s);
			
			else{
				while(preced(in[i])<=preced(peek(&s)) && !empty(&s))
				{
					post[j++]=pop(&s);
				}
				push(&s,in[i]);
			}
				
			}
		

		while(!empty(&s))
			post[j++] = pop(&s);

		post[j]=0;
	}


int main()
{
	char b[100],pf[100];

	printf("enter the infix expression\n");
	scanf("%s",b);

	infixToPostfix(b,pf);

	printf("postfix expression: %s",pf);

	return 0;
}

