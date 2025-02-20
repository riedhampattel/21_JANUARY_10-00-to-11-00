#include<stdio.h>
int main()
{
	int num,i,sum=0;
	for(i=1;i<=10;i++)
	{
		printf("\nEnter the number = ");
		scanf("%d",&num);
		sum = sum + num;
	}
	printf("\nAddition of 10 numbers = %d",sum);
	printf("\nAverage of 10 numbers = %.2f",(float)sum/(float)10);
	return 0;
}
