#include<stdio.h>
int main()
{
	int n1,n2,i,j;
	printf("\nPlease enter the numbers in multiply of 10");
	printf("\nEnter the starting point = ");
	scanf("%d",&n1);//10
	printf("\nEnter the ending point = ");
	scanf("%d",&n2);//60
	int temp = n1+1;
	int copy = n1+1;
	for(i=1;i<=10;i++)
	{
		temp = copy;
		for(j=1;j<=(n2-n1)/10;j++)
		{
			if(j!=1)
			{
				temp = temp + 10;
			}
			printf("%d\t",temp);
		}
		printf("\n");
		copy++;
	}
	return 0;
}
