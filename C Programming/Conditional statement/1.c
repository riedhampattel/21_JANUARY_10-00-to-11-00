#include<stdio.h>
#include<math.h>
int main()
{
	int n1,n2,power,ans;
	char choice;
	char mod = '%';
	up :
	printf("\nEnter the value of n1 = ");
	scanf("%d",&n1);
	printf("\nEnter the value of n2 = ");
	scanf("%d",&n2);
	
	printf("\n\npress '+' for addition");
	printf("\npress '-' for subtraction");
	printf("\npress '*' for multiplication");
	printf("\npress '/' for division");
	printf("\npress '%c' for remainder",mod);
	printf("\npress 'p' for power");
	printf("\npress '2' for square");
	printf("\npress '3' for cube");
	printf("\npress 's' for square root");
	printf("\npress 'x' for exit");
	printf("\n\nEnter your choice = ");
	scanf(" %c",&choice);
	
	switch(choice)
	{
		case '+':
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
		case '%':
			printf("\nThe remainder of %d and %d is %d",n1,n2,n1%n2);
		break;
		case 'p':
			power = pow(n1,n2);
			printf("\nThe power of %d and %d is %d",n1,n2,power);
		break;
		case '2':
			printf("\nSquare of %d is %d",n1,n1*n1);
			printf("\nSquare of %d is %d",n2,n2*n2);
		break;
		case '3':
			printf("\nCube of %d is %d",n1,n1*n1*n1);
			printf("\nCube of %d is %d",n2,n2*n2*n2);
		break;
		case 's':
			ans = sqrt(n1);
			printf("\nSquare root of %d is %d",n1,ans);
			ans = sqrt(n2);
			printf("\nSquare root of %d is %d",n2,ans);
		break;
		case 'x':
			goto down;
		break;
	}
	goto up;
	down :
	return 0;
}
