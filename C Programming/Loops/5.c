#include<stdio.h>
int main()
{
	int n,sum=0,i;
	printf("\nEnter the number = ");
	scanf("%d",&n);//3
	for(i=1;i<=n;i++)
	{
		sum = sum + i;
	}
	printf("\nThe addition is = %d",sum);
	printf("\nThe average is = %.2f",(float)sum/(float)n);
	return 0;
}
