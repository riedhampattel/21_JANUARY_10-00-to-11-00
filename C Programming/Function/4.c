#include<stdio.h>
//without return type without argument
void sub();//declaration
int main()
{
	sub();//calling
	return 0;
}
void sub()//definition
{
	int n1,n2;
	printf("\nEnter the value in n1 = ");
	scanf("%d",&n1);
	printf("\nEnter the value in n2 = ");
	scanf("%d",&n2);
	printf("\nThe subtraction is = %d",n1-n2);
}
