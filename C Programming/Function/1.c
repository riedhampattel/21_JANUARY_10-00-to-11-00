#include<stdio.h>
//with return type with argument
int add(int n1,int n2);//declaration
int main()
{
	int ans = add(10,20);//calling
	printf("\nThe addition is = %d",ans);
	return 0;
}
int add(int n1,int n2)//definition
{
	int ans;
	ans = n1+n2;
	return ans;
}
