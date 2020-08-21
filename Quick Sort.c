#include<stdio.h>

int partition(int a[],int l, int h)
{
	int p,i,j,temp;
	p=a[l];
	i=l+1;
	j=h;
	
	while(i<j)
	{
		while(a[i]<=p)
			i++;
		
		while(a[j]>p)
			j--;
			
		if(i<j)
		{
			temp=a[j];
			a[i]=a[j];
			a[j]=temp;
		}
		
		a[i]=a[j];
		a[j]=p;
		
		return j;
	}
}

void QuickSort(int a[],int l,int h)
{
	int j;
	
	if(l<h)
	{
		j=partition(a,l,h);
		QuickSort(a,l,j-1);
		QuickSort(a,j+1,h);
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
	printf("Quick sort:\n");
			QuickSort(a,0,n);
			
			for(i=0;i<n;i++)
			printf("%d",a[i]);
}
		