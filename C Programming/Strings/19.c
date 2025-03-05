#include<stdio.h>
void concat(char ch1[],char ch2[]);
int main()
{
	char str1[200],str2[100];
	printf("\nEnter the value in str1 = ");
	fgets(str1,100,stdin);
	printf("\nEnter the value in str1 = ");
	gets(str2);
	printf("\nOriginal value in str1 = %s",str1);
	printf("\nOriginal value in str2 = %s",str2);
	concat(str1,str2);
	return 0;
}
void concat(char ch1[],char ch2[])
{
	int count=0,i,j;
	for(i=0;ch1[i]!='\0';i++)
	{
		count++;
	}
	for(j=0;ch2[j]!='\0';j++)
	{
		ch1[count] = ch2[j];
		count++;
	}
	ch1[count]='\0';
	printf("\nValue of str1 = %s",ch1);
	printf("\nValue of str2 = %s",ch2);
}
