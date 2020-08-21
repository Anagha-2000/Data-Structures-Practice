#include<stdio.h>

void modified_BubleSort(int a[],int n)
{
	int i,j,t,x=n,flag=1;
	
	for(i=1;i<n && flag;i++)
	{
        flag=0;
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
                flag=1;
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
	printf("Modified Bubble sort:\n");
			modified_BubleSort(a,n);
			
			for(i=0;i<n;i++)
			printf("%d",a[i]);
}
	