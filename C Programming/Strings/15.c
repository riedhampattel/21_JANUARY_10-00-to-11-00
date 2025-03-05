#include<stdio.h>
void reverse(char ch[]);
int main()
{
	char str[100];
	printf("\nEnter the string = ");
	gets(str);
	printf("\nOriginal value of str = %s",str);
	reverse(str);
	return 0;
}
void reverse(char ch[])
{
	int i,count=0;
	for(i=0;ch[i]!='\0';i++)
	{
		count++;
	}
	printf("\nReversed string = ");
	for(i=count-1;i>=0;i--)
	{
		printf("%c",ch[i]);
	}
}
