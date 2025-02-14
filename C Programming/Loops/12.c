#include<stdio.h>
int main()
{
	int n1,n2,sume=0,sumo=0;
	printf("\nEnter the n1 = ");
	scanf("%d",&n1);
	printf("\nEnter the n2 = ");
	scanf("%d",&n2);
	for(i=n1;i<=n2;i++)
	{
		if(i%2==0)
		{
			sume = sume + i;
		}
		else
		{
			sumo = sumo + i;
		}
	}
	printf("\nAddition of even numbers = %d",sume);
	printf("\nAddition of odd numbers = %d",sumo);
	return 0;
}
