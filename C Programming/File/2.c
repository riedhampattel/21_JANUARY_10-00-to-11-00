#include<stdio.h>
int main()
{
	FILE *fp1;
	fp1=fopen("second.txt","a");
	fprintf(fp1,"\nHello World!");
	fprintf(fp1,"\nHow are you?");
	fclose(fp1);
	printf("\nOperation successful");
	return 0;
}
