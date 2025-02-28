#include<stdio.h>
//without return type with argument
void muti(int n1,int n2);//declaration
int main()
{
	int num1,num2;
	printf("\nEnter the value in num1 = ");
	scanf("%d",&num1);//10
	printf("\nEnter the value in num2 = ");
	scanf("%d",&num2);//20
	multi(num1,num2);
	return 0;
}
void multi(int n1,int n2)
{
	int ans = n1*n2;
	printf("\nThe multiplication = %d",ans);
}
