#include<stdio.h>
int main()
{
	char ch[300];
	printf("\nEnter the string = ");
	fgets(ch,sizeof(ch),stdin);
	printf("\n%s",ch);
	return 0;
}
