#include<stdio.h>
struct Demo
{
	int n;
	char ch;
};
union Demo1
{
	int n;
	char ch;
};
int main()
{
	struct Demo s1;
	union Demo1 u1;
	s1.n = 101;
//	s1.ch = 'A';
	printf("\nValue of n (structure) = %d",s1.n);
	printf("\nValue of ch (structure) = %c",s1.ch);
	
	u1.n = 101;
	u1.ch = 'A';
	printf("\nValue of n (union) = %d",u1.n);
	printf("\nValue of ch (union) = %c",u1.ch);
	return 0;
}
