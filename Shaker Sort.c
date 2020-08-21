#include<stdio.h>

void shakerSort(int a[],int n)
{
	int i,j,t,x,flag=1;
	
	for(i=1;flag;i++)
	{
        flag=0;
		for(j=i;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
                flag=1;
			}

            if(flag)
            {
                flag=0;
                for(j=n-2-i;j>=i+1;j--)
                {
                    t=a[j];
                    a[j]=a[j-1];
                    a[j-1]=t;
                    flag=1;

                }
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
	printf("Shaker sort:\n");
			shakerSort(a,n);
			
			for(i=0;i<n;i++)
			printf("%d",a[i]);
}
	