#include<stdio.h>

void bubleSort(int a[],int n)
{
	int i,j,t;
	
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}


void main()
{
	int ch,a[10];
	int n,i;
	printf("enter the size of the array\n");
	scanf("%d",&n);
		
	printf("enter the elements in the array\n");
			
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	printf("Bubble sort:\n");
			bubbleSort(a,0,n);
			
			for(i=0;i<n;i++)
			printf("%d",a[i]);
}
	