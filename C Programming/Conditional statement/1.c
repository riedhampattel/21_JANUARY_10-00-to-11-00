#include<stdio.h>
int main()
{
	int n1,n2;
	char choice;
	printf("\nEnter the value of n1 = ");
	scanf("%d",&n1);
	printf("\nEnter the value of n2 = ");
	scanf("%d",&n2);
	
	printf("\n\npress '+' for addition");
	printf("\npress '-' for subtraction");
	printf("\npress '*' for multiplication");
	printf("\npress '/' for division");
	printf("\npress '%' for remainder");
	printf("\npress 'p' for power");
	printf("\npress '2' for square");
	printf("\npress '3' for cube");
	printf("\npress 's' for square root");
	printf("\n\nEnter your choice = ");
	scanf(" %c",&choice);
	
	switch(choice)
	{
		case '1':
			printf("\nThe addition of %d and %d is %d",n1,n2,n1+n2);
		break;
		case '-':
			printf("\nThe subtraction of %d and %d is %d",n1,n2,n1-n2);
		break;
		case '*':
			printf("\nThe multiplication of %d and %d is %d",n1,n2,n1*n2);
		break;
		case '/':
			printf("\nThe division of %d and %d is %.2f",n1,n2,(float)n1/(float)n2);
		break;
	}
	return 0;
}
