#include<stdio.h>
void copy(char ch[]);
int main()
{
	char str[100];
	printf("\nEnter the string = ");
	gets(str);
	printf("\nOriginal value of str = %s",str);
	copy(str);
	return 0;
}
void copy(char ch[])
{
	char cpy[100];
	int i;
	for(i=0;ch[i]!='\0';i++)
	{
		cpy[i]=ch[i];
	}
	cpy[i]='\0';
	printf("\nCopied string = %s",cpy);
}
