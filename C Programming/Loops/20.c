/*
*
* *
* * *
* * * *
* * * * *
*/
#include<stdio.h>
int main()
{
	int row,i,j;
	printf("\nEnter the row count = ");
	scanf("%d",&row);//3
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
