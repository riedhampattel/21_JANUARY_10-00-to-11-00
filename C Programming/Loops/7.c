#include<stdio.h>
int main()
{
	int num,i,fact=1;
	printf("\nEnter the number = ");
	scanf("%d",&num);//3
	for(i=1;i<=num;i++)
	{
		fact = fact*i;
	}
	printf("\nFactorial of %d is %d",num,fact);
	return 0;
}
