#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	printf("\nEnter the value in str1 = ");
	gets(str1);
	printf("\nEnter the value in str2 = ");
	gets(str2);
	
	printf("\noriginal value of str1 = %s",str1);
	printf("\noriginal value of str2 = %s",str2);
	
	strupr(str1);
	strlwr(str2);
	
	printf("\nValue of str1 after using strupr function = %s",str1);
	printf("\nValue of str2 after using strlwr function = %s",str2);
	return 0;
}
