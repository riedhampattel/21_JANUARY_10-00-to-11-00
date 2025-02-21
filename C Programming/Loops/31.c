#include<stdio.h>
int main()
{
	int num,count=0,i;
	printf("\nEnter the number = ");
	scanf("%d",&num);//100
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			count++;
			break;
		}
	}
	if(count==0)
	{
		printf("\n%d is a prime number",num);
	}
	else
	{
		printf("\n%d is not a prime number",num);
	}
	return 0;
}
