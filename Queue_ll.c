#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}Node;

	Node *front=NULL;
	Node *rear=NULL;
	Node *top=NULL;

void addQ(int v)
{

	Node *newnode=(Node*)malloc(sizeof(Node));

	if(newnode == NULL)
	printf("full");

	else if(front == NULL)
	{
	  front=newnode;
	  rear=newnode;
	  newnode->next=NULL;
	  newnode->data=v;
	}

	else{
	     newnode->data=v;
 	     rear->next=newnode;
	    newnode->next=NULL;
	    rear=newnode;
	}
}

void deQ()
{
	if(front == NULL)
	{
	printf("empty");
	return;
	}

	else{
	int v=front->data;
	front=front->next;

	if(front == NULL)
	rear=NULL;

	printf("removed element = %d",v);
	}
}

void push(int v)
{
	Node *newn=(Node*)malloc(sizeof(Node));
	
	if(newn==NULL)
	printf("full");
	
	else{
	if(top==NULL)
	{
	newn->data=v;
	newn->next=NULL;
	top=newn;
	}

	else{
	newn->data=v;
	newn->next=top;
	top=newn;
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
	Node *t=top;
	top=top->next;
	free(t);
	printf("the poped element is=%d\n",v);
	}
}

void peek()
{
	if(top==NULL)
	{
	printf("empty");
	return;
	}
	
	else{
	int v=top->data;
	printf("the peek of the stack is=%d\n",v);
	}
}

void disp_Stack()
{
	int n;
	Node *q=top;
	
	while(q!=NULL)
	{
	n=q->data;
	printf("%d\t",n);
	q=q->next;
	}
}


void disp_Queue()
{
	Node *t=front;

	while(t!=NULL)
	{
	printf("%d\t",t->data);
	t=t->next;
	}
}

int main()
{
	
	Node s;

	int ch,n,c1,c2;

	do{
	printf("\n1Queue using link list\n2.Stack using linked list\n3.exit\nenter your choice\n");
	scanf("%d",&ch);

	switch(ch)
	{
		
	case 1:
		do{
		printf("\n1.enque\n2.deque\n3.display\n4.exit\nenter your choice\n");
		scanf("%d",&c1);
	
		switch(c1)
		{
		case 1:
		printf("enter the value\n");
		scanf("%d",&n);
		addQ(n);
		break;
	
		case 2:
		deQ();
		break;

		case 3:
		printf("element in queue\n");
		disp_Queue();
		break;
		}
       		 }while(c1>0 && c1<4);
		break;
	case 2:
		
		do{
		printf("\n1.push\n2.pop\n3.peek\n4.display\n5.exit\nenter your choice\n");
		scanf("%d",&c2);
	
		switch(c2)
		{
		case 1:
		printf("enter the value\n");
		scanf("%d",&n);
		push(n);
		break;
	
		case 2:
		pop();
		break;
		
		case 3:
		peek();
		break;

		case 4:
		printf("element in stack\n");
		disp_Stack();
		break;
		}
       		 }while(c2>0 && c2<5);

		}
		}while(ch>0 && ch<3);
return 0;
}
