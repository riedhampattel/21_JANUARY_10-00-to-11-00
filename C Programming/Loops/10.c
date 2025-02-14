#include<stdio.h>
int main()
{
	int n1,n2;
	printf("\nEnter the n1 = ");
	scanf("%d",&n1);
	printf("\nEnter the n2 = ");
	scanf("%d",&n2);
	for(i=n1;i<=n2;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);	
		}
	}
	return 0;
}
