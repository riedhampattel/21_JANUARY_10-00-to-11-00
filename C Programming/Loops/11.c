#include<stdio.h>
int main()
{
	int n1,n2;
	printf("\nEnter the n1 = ");
	scanf("%d",&n1);//2
	printf("\nEnter the n2 = ");
	scanf("%d",&n2);//6
	for(i=n1;i<=n2;i++)
	{
		printf("%d ",i*i);
	}
	return 0;
}
