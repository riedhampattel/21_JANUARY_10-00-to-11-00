#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],ans[100][100];
	int row,col,i,j,k;
	char choise;
	
	printf("\nEnter the row number = ");
	scanf("%d",&row);
	printf("\nEnter the col number = ");
	scanf("%d",&col);
	
	printf("\nEnter the elements in array a :=");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the elements in a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter the elements in array b :=");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the elements in b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nArray a := \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nArray b := \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	printf("\nPress '+' for addition");
	printf("\nPress '-' for subtraction");
	printf("\nPress '*' for multiplication");
	printf("\nEnter the choice = ");
	scanf(" %c",&choise);
	
	switch(choise)
	{
		case '+':
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					ans[i][j] = a[i][j] + b[i][j];
				}
			}
			printf("\nArray after addition := \n");
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%2d ",ans[i][j]);
				}
				printf("\n");
			}
		break;
		case '-':
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					ans[i][j] = a[i][j] - b[i][j];
				}
			}
			printf("\nArray after subtraction := \n");
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%2d ",ans[i][j]);
				}
				printf("\n");
			}
		break;
		case '*':
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					ans[i][j] = 0;
					for(k=0;k<col;k++)
					{
						ans[i][j] = ans[i][j] + (a[i][k]*b[k][j]); 
					}
				}
			}
			printf("\nMultiplication of an array := \n");
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%2d ",ans[i][j]);
				}
				printf("\n");
			}
		break;
	}
	return 0;
}
