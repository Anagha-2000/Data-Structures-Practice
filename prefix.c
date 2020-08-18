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
			return 3;
		
		case '+':
		case '-':
			return 2;

		case '(':
		case ')':
			return 1;
	}
	return 0;
}

void infixToPrefix(char in[],char pre[])
{
    Stack s;
    init(&s);
    int i,j=0;

    for(i=strlen(in)-1;i>=0;i--)
    {
        if(isalnum(in[i]))
            pre[j++]=in[i];

        else
        {
            if(empty(&s) || in[i] == ')' || preced(in[i]) >= preced(peek(&s)))
                push(&s,in[i]);
            else if(in[i] == '(')
            {
                while(!empty(&s) && peek(&s) != ')')
                    pre[j++] = pop(&s);

                pop(&s);
                
            }

            else{
                while(!empty(&s) && preced(in[i]<preced(peek(&s))))
                    pre[j++] =  pop(&s);

                    push(&s,in[i]);
            }

            
        }
        
    }
    while(!empty(&s))
        pre[j++]=pop(&s);

    pre[j]=0;

    j=strlen(pre)-1;
    strrev(pre);
}

int main()
{
	char b[100],pf[100];

	printf("enter the infix expression\n");
	scanf("%s",b);

	infixToPrefix(b,pf);

	printf("prefix expression: %s",pf);

	return 0;
}

