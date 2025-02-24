//Write a c program to take size of an array and elements from the user and display only unique elements of an array.
#include<stdio.h>
int main()
{
	int a[100],size,i,j;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the elements in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\nUnique elements = ");
	for(i=0;i<size;i++)
	{
		int count=0;
		for(j=0;j<size;j++)
		{
			if(i!=j)
			{
				if(a[i]==a[j])
				{
					count=1;
					break;	
				}	
			}
		}
		if(count==0)
		{
			printf("%d ",a[i]);
		}
	}
	return 0;
}
