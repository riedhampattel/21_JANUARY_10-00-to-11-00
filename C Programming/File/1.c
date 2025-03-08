#include<stdio.h>
int main()
{
	FILE *fp1;
	fp1=fopen("first.txt","w");
	fprintf(fp1,"Tops Technologies");
	fprintf(fp1,"\nCG Road,Ahmedabad");
	fclose(fp1);
	printf("\nOperation successful");
	return 0;
}
