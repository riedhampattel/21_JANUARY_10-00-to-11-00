#include<stdio.h>
int main()
{
	int row,col;
	printf("\nEnter the row count = ");
	scanf("%d",&row);//3
	printf("\nEnter the col count = ");
	scanf("%d",&col);//3
	
	for(i=1;i<=row;i++)//row(outer)
	{
		for(j=1;j<=col;j++)//col(inner)
		{
			printf("* ");
		}
	}
	return 0;
}
