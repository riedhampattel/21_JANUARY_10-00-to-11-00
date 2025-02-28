#include<stdio.h>
//with return type without argument
float divide();//declaration

int main()
{
	float ans = divide();//calling
	printf("\nThe division = %.2f",ans);
	return 0;
}

float divide()//definition
{
	int n1,n2;
	printf("\nEnter the value in n1 = ");
	scanf("%d",&n1);
	printf("\nEnter the value in n2 = ");
	scanf("%d",&n2);
	float result = (float)n1/(float)n2;
	return result;
}
