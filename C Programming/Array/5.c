#include<stdio.h>
int main()
{
	int roll[100],size,i;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the value in roll[%d] = ",i);
		scanf("%d",&roll[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("\nRoll no. of student %d = %d",i+1,roll[i]);
	}
	return 0;
}
