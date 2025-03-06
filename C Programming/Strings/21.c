//write a c program to take a string as an input and calculate the count of words
#include<stdio.h>
int main()
{
	char str[100];
	int word=0,i;
	printf("\nEnter the string = ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			word++;
		}
	}
	printf("\nCount of words = %d",word+1);
	return 0;
}
