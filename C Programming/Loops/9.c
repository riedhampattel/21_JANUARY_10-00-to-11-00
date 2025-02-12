#include<stdio.h>
int main()
{
	int count,i,n,sum=0;
	printf("\nEnter the count = ");
	scanf("%d",&count);//3
	for(i=1;i<=count;i++)
	{
		printf("\nEnter the number %d = ",i);
		scanf("%d",&n);//3
		sum = sum + n;
	}
	printf("\nThe addition is = %d",sum);
	printf("\nThe average is = %.2f",(float)sum/(float)count);
	return 0;
}
