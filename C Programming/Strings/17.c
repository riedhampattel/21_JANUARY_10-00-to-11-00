#include<stdio.h>
void copy(char ch1[],char ch2[]);
int main()
{
	char str1[100],str2[100];
	printf("\nEnter the value in str1 = ");
	gets(str1);
	printf("\nEnter the value in str2 = ");
	gets(str2);
	printf("\nOriginal value of str1 = %s",str1);
	printf("\nOriginal value of str2 = %s",str2);
	copy(str1,str2);
	printf("\nValue of str1 = %s",str1);
	printf("\nValue of str2 = %s",str2);
	return 0;
}
void copy(char ch1[],char ch2[])
{
	int i;
	for(i=0;ch2[i]!='\0';i++)
	{
		ch1[i] = ch2[i];
	}
	ch1[i] = '\0';
}
