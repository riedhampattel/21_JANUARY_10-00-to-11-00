#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter the number = ");
	scanf("%d",&num);//5
	if(num>0)
	{
		printf("\n%d is a positive number",num);
	}
	else
	{
		printf("\n%d is a negative number",num);
	}
	return 0;
}
