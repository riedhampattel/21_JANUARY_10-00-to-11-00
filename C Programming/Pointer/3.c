#include<stdio.h>
int main()
{
	char ch[5] = {'A','B','C','D','E'};
	char *ptr = &ch;
	printf("\nAddress of ch = %p",ptr);
	
	printf("\nAddress of ch[0] = %p",&ch[0]);
	printf("\nAddress of ch[1] = %p",&ch[1]);
	printf("\nAddress of ch[2] = %p",&ch[2]);
	printf("\nAddress of ch[3] = %p",&ch[3]);
	printf("\nAddress of ch[4] = %p",&ch[4]);
	return 0;
}
