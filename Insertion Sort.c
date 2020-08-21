#include<stdio.h>

void insertionSort(int a[],int n)
{
	int i,j,item;
	
	for(i=1;i<n;i++)
	{
		item=a[i];
		
		for(j=i-1;j>=0 && item<a[j];j--)
			a[j+1]=a[j];
			
		
	a[j+1]=item;
}

	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
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
	printf("Insertion sort:\n");
			insertionSort(a,n);
			
			for(i=0;i<n;i++)
			printf("%d",a[i]);
}
	