#include<stdio.h>
int main()
{
	int n1,n2,sum=0,i;
	printf("\nEnter the starting number = ");
	scanf("%d",&n1);//10
	printf("\nEnter the ending number = ");
	scanf("%d",&n2);//15
	for(i=n1;i<=n2;i++)
	{
		sum = sum + i;
	}
	printf("\nThe addition is = %d",sum);
	printf("\nThe average is = %.2f",(float)sum/(float)((n2-n1)+1));
	return 0;
}
