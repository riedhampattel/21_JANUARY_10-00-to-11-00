#include<stdio.h>
int main()
{
	int a[5] = {1,2,3,4,5},i;
	int *ptr = &a;
	printf("\nBase address = %p",ptr);
	
	for(i=0;i<5;i++)
	{
		printf("\nAddress of a[%d] = %p",i,ptr+i);
	}
	for(i=0;i<5;i++)
	{
		printf("\nValue of a[%d] = %d",i,*(ptr+i));
	}
	return 0;
}
