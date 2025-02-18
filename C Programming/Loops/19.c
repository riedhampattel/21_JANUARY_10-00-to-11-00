#include<stdio.h>
int main()
{
	int row,col,i,j;
	printf("\nEnter the row count = ");
	scanf("%d",&row);//2
	printf("\nEnter the col count = ");
	scanf("%d",&col);//2
	
	for(i=1;i<=row;i++)//row(outer)
	{
		for(j=1;j<=col;j++)//col(inner)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
