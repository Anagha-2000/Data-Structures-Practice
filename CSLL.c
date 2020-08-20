#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	struct node *next;
	int data;
	struct node *prev;
}Node;

Node* insertEnd(Node *p,int v)
{
	Node *newnode=(Node*)malloc(sizeof(Node));
	
	newnode->data=v;
	newnode->next=NULL;
	
	if(p==NULL)
	{
		newnode->prev=NULL;
		p=newnode;
	}
	
	else{
		Node *q=p;
		
		while(q->next != NULL)
		q=q->next;
		
		q->next=newnode;
		newnode->prev=q;
		
	}
	
	return p;
}

Node* insertBeg(Node *p,int v)
{
	Node *newnode=(Node*)malloc(sizeof(Node));
		newnode->data=v;
	if(p==NULL)
	{
		newnode->prev=NULL;
		newnode->next=NULL;
		p=newnode;
	}
	
	newnode->prev=NULL;
	p->prev=newnode;
	newnode->next=p;
	p=newnode;
	
	return p;
}

Node* insertMid(Node *p,int v,int a)
{
	Node *newnode,*q=p;
	
	while(q->data != a)
			q=q->next;
			
			newnode=(Node*)malloc(sizeof(Node));
			
			newnode->data=v;
			newnode->next=q->next;
			q->next=newnode;
			newnode->prev=q;
						
			if(newnode->next != NULL)
				newnode->next->prev=newnode;
	
	if(q==NULL)
		printf("\nelement not inserted\n");
	
	else
		printf("\nelement inserted\n");
		
	return p;
	
}

Node* deleteBeg(Node *p)
{
	Node *q=p;
	
	p=p->next;
	p->prev=NULL;
	
	printf("\nthe deleted element is = %d\n",q->data);
	
	free(q);
	
	return p;
}

Node* deleteMid(Node *p,int v)
{
	Node *q=p,*pr=NULL;
	
	while(q != NULL)
	{
		if(q->data == v)
		break;
		
		pr=q;
		q=q->next;
	}
	
	q->prev->next=q->next;
	q->next->prev=q->prev;
	
	if(q==NULL)
	printf("\nelement not deleted\n");
	else
		printf("\nthe deleted element is = %d\n",q->data);
	
		free(q);
		
	return p;
}

Node* deleteEnd(Node *p)
{
	Node *q=p,*pr;
	
	while(q->next != NULL)
	{
		pr=q;
		q=q->next;
	}
	
	pr->next=q->next;
	
	if(p != NULL)
	p->prev=NULL;
	
	printf("\nthe deleted element is = %d\n",q->data);
	
	free(q);

	return p;
}

void displayForw(Node *q)
{
	Node *p=q;
	while(p != NULL)
	{
		printf("%d\t",p->data);
		p=p->next;
	}
	printf("\n");
	
}

void displayBack(Node *q)
{
	Node *p=q;
	while(p->next != NULL)
	{
		p=p->next;
	}	
	
	while(p != NULL)
	{
		printf("%d\t",p->data);
		p=p->prev;
	}
	
	printf("\n");
}

int main()
{
	Node *first=NULL;
	int ch,n,n1,c;
	
	do{
	printf("\n1.insert\n2.delete\n3.display\n4.exit\nenter your choice\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			printf("\n1.insert in the beginning\n2.insert in the middle\n3.insert at the end\nenter your choice\n");
			scanf("%d",&c);
			
			printf("enter the value\n");
			scanf("%d",&n);
			
			switch(c)
			{
			case 1:
				first=insertBeg(first,n);
				break;
				
			case 2:
			
				printf("enter the value to be inserted after\n");
				scanf("%d",&n1);
				first=insertMid(first,n,n1);
				break;
				
			case 3:
				first=insertEnd(first,n);
				break;
			}
			break;
	 		
	 		
	 		case 2:
			printf("\n1.delete in the beginning\n2.delete in the middle\n3.delete at the end\nenter your choice\n");
			scanf("%d",&c);
			
			switch(c)
			{
			case 1:
				first=deleteBeg(first);
				break;
				
			case 2:
			
			printf("enter the value to be deleted after\n");
			scanf("%d",&n1);
			first=deleteMid(first,n1);
			break;
					
			case 3:
				first=deleteEnd(first);
				break;
			}
			
			break;
	 		
	 		
	 		case 3:
	 			
	 			printf("\n1.display forward\n2.display backword\nenter your choice\n");
	 			scanf("%d",&c);
	 			
	 			if(c==1)
	 			displayForw(first);
	 			
	 			else
	 			displayBack(first);
	 			
				break;
		}
	}while(ch>0 && ch<4);
		
		return 0;
}