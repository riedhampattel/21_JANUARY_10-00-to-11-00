#include<stdio.h>
int compare(char ch1[],char ch2[]);
int main()
{
	char str1[100],str2[100];
	printf("\nEnter the value in str1 = ");
	gets(str1);
	printf("\nEnter the value in str2 = ");
	gets(str2);
	int result = compare(str1,str2);
	if(result == 0)
	{
		printf("\nBoth the strings are same");
	}
	else
	{
		printf("\nBoth the strings are different");
	}
	return 0;
}
int compare(char ch1[],char ch2[])
{
	int i,temp=0;
	for(i=0;ch1[i]!='\0';i++)
	{
		if(ch1[i]!=ch2[i])
		{
			temp=1;
			break;
		}
	}
	return temp;
}
