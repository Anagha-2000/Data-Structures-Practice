#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}Node;

Node *start=NULL;
Node *end=NULL;
void add(int v)
{
	Node *newnode=(Node*)malloc(sizeof(Node));
	newnode->data=v;
	Node *q,*prev;
	if(end==NULL){
	end=newnode;
	start=newnode;
	newnode->next=newnode;
	}

	else{
	end->next=newnode;	
	newnode->next=start;
	end=end->next;	
	}
	
}

int delete()
{
	Node *q;
	int n;

	if(end==NULL)
	{
	printf("empty");
	return 0;
	}
	
	else{
	q=start;
	n=start->data;
	start=start->next;
	end->next=start;
	free(q);
	}
return n;
	
}

int main()
{
	int ch,m;

	do{
	printf("1.add\n2.delete\n3.exit\nenter your choice\n");	
	scanf("%d",&ch);
	
	switch(ch)
	{
	case 1:
	printf("enter the element\n");
	scanf("%d",&m);
	add(m);
	break;
	
	case 2:
	m=delete();
	printf("deleted element is=%d\n",m);
	break;

	/*case 3:
	printf("elements in circular linked list\n");
	display(&p);
	break;*/
	}
	}while(ch>0 && ch<3);
return 0;
}