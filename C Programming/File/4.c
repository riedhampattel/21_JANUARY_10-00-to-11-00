#include<stdio.h>
int main()
{
	FILE *fp1;
	char text[100];
	fp1=fopen("student.txt","r");
	while(fgets(text,sizeof(text),fp1))
	{
		printf("%s",text);
	}
	fclose(fp1);
	printf("\nOperation successful");
	return 0;
}
