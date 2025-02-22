#include<stdio.h>
int main()
{
	int roll[5],i;
	for(i=0;i<5;i++)
	{
		printf("\nEnter the roll no. = ");
		scanf("%d",&roll[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\nRoll of student %d = %d",i+1,roll[i]);
	}
	return 0;
}
