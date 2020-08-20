#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}Node;

	Node *top=NULL;

void push(int v)
{
Node *newnode=(Node*)malloc(sizeof(Node));

	if(newnode == NULL)
	printf("full");

	else{
	if(top == NULL)
	{
	newnode->data=v;
	newnode->next=NULL;
	top=newnode;
	}

	else{
	newnode->data=v;
	newnode->next=top;
	top=newnode;
	}
	}
}

void pop()
{
	if(top==NULL)
	{
	printf("empty");
	return;
	}

	else{
	int v=top->data;
	return v;
    }
}

void display(Node *p)
{
	while(p!=NULL)
	{
		printf("%d\t",p->data);
		p=p->next;
	}
}

void main()
{
    Node s;

    
}