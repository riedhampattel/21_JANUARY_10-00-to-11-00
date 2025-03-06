#include<stdio.h>
void upper(char ch[]);
void lower(char ch[]);
int main()
{
	char str1[100],str2[100];
	printf("\nEnter the str1 = ");
	gets(str1);
	printf("\nEnter the str2 = ");
	gets(str2);
	printf("\nOriginal value of str1 = %s",str1);
	printf("\nOriginal value of str2 = %s",str2);
	
	upper(str1);
	lower(str2);
	
	printf("\nstr1 in upper case = %s",str1);
	printf("\nstr2 in lower case = %s",str2);
	return 0;
}
void upper(char ch[])
{
	int i;
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]>='a' && ch[i]<='z')
		{
			ch[i] = ch[i] - 32;
		}
	}
}
void lower(char ch[])
{
	int i;
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]>='A' && ch[i]<='Z')
		{
			ch[i] = ch[i] + 32;
		}
	}
}
