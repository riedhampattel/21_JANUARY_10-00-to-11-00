#include<stdio.h>
int main()
{
	long int amnt;
	printf("\nEnter the amount = ");
	scanf("%ld",&amnt);//5236
	
	printf("\n500 = %ld",amnt/500);
	amnt = amnt % 500;
	printf("\n200 = %ld",amnt/200);
	amnt = amnt % 200;
	printf("\n100 = %ld",amnt/100);
	amnt = amnt % 100;
	printf("\n50 = %ld",amnt/50);
	amnt = amnt % 50;
	printf("\n20 = %ld",amnt/20);
	amnt  = amnt % 20;
	printf("\n10 = %ld",amnt/10);
	amnt  = amnt % 10;
	printf("\n5 = %ld",amnt/5);
	amnt  = amnt % 5;
	printf("\n2 = %ld",amnt/2);
	amnt  = amnt % 2;
	printf("\n1 = %ld",amnt);
	return 0;
}
