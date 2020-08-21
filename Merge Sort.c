#include<stdio.h>


void merge(int a[],int l,int m,int r)
{
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	int L[n1],R[n2];
	
	for(i=0;i<n1;i++)
		L[i]=a[l+i];
		
		for(j=0;j<n2;j++)
		R[j]=a[m+1+j];
		
		i=0,j=0,k=l;
		
		while(i<n1 && j<n2)
		{
			if(L[i] <= R[j])
			{
				a[k]=L[i];
				i++;
			}
			
			else{
			
			a[k]=R[j];
			j++;
			}
			
			k++;
		}
		
		while(i<n1)
		{
			a[k]=L[i];
			i++;
			k++;
		}
		
		while(j<n2)
		{
			a[k]=R[j];
			j++;
			k++;
		}
}

void MergeSort(int a[],int l,int r)
{
	int m;
		if(l<r)
		{
			m=(l+r)/2;
			
			MergeSort(a,l,m);
			MergeSort(a,m+1,r);
			merge(a,l,m,r);
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
	printf("Merge sort:\n");
				MergeSort(a,0,(n-1));
			
			for(i=0;i<n;i++)
			printf("%d",a[i]);
}
	