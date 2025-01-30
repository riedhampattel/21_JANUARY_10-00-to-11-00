#include<stdio.h>
int main()
{
	int a;
	float f;
	char ch;//Hi
	
	printf("\nEnter the value of a = ");
	scanf("%d",&a);
	printf("\nEnter the value of float = ");
	scanf("%f",&f);
	printf("\nEnter the value of char = ");
	scanf(" %c",&ch);
	
	printf("\nValue of a = %d",a);
	printf("\nValue of f = %.3f",f);
	printf("\nValue of ch = %c",ch);
	return 0;
}
