#include<stdio.h>
int length(char ch[])
{
	//hello
	int count=0;
	for(i=0;ch[i]!='\0';i++)
	{
		count++;
	}
	return count;
}
int main()
{
	char str[100];
	printf("\nEnter the string = ");
	gets(str);
	printf("\nOriginal value of str = %s",str);
	
	int answer = length(str);
	
	printf("\nLength of string = %d",answer);
	return 0;
}
