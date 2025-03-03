#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	printf("\nEnter the value in str1 = ");
	gets(str1);
	
	printf("\noriginal value of str1 = %s",str1);
	printf("\noriginal value of str2 = %s",str2);
	
	strcpy(str2,str1);
	
	printf("\nValue of str1 after using copy function = %s",str1);
	printf("\nValue of str2 after using copy function = %s",str2);
	return 0;
}
