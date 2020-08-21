#include<stdio.h>

int max_min(int *a,int n)
{
	int max1=a[0],min1=a[0],m,n1;
	
	if(n==1)
		return *a;
		
	if(n==2)
	{
		max1=*a>*(a+1)?*a:*(a+1);
		return max1;
	}
	
	else{
		int m=n/2;
		int i;
		for(i=0;i<m;i++)
		{
			if(a[i]>a[i+1])
			max1=a[i];
			else
			min1=a[i+1];
		}
		int max2=a[m],min2=a[m];
		for(i=m;i<n;i++)
		{
			if(a[m]>a[m+1])
			max2=a[m];
			else
			min2=a[m+1];
		}
		
	
	if(max1>max2)
	m=max1;
	else
	m=max2;
	
	if(min1>min2)
	n1=min2;
	else
	n1=min1;
	
		
	}
}

int main()
{
	int i,a[10],n,min,max;
	
	printf("enter the no. of terms in array\n");
	scanf("%d",&n);
	
	printf("enter the elements in the array:\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	if(n==2){
   max=max_min(a,n);
   if((min=a[0])==max)
   min=a[1];
	printf("max=%d min=%d",max,min);
	return 0;
}
}