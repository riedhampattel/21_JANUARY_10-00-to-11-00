//write a c program to take first name, middle name and last name as an input and print abbriated form
#include<stdio.h>
int main()
{
	char name[50],abr[20];
	int i,j=0,k=0;
	printf("\nEnter your name (first name missle name last name) = ");
	gets(name);
	//ayush rameshbhai halani
	//abr={ARH}
	for(i=0;name[i]!='\0';i++)//6
	{
		if(i==0 || name[i-1]==' ')
		{
			abr[j] = toupper(name[i]);
			j++;//3
			k++;//3
		}
		if(k==3)
		{
			abr[j] = name[i+1];
			j++;
		}
	}
	abr[j]='\0';
	printf("\nAbbriviated form = ");
	for(i=0;abr[i]!='\0';i++)
	{
		printf("%c",abr[i]);
		if(i==0 || i==1)
		{
			printf(".");
		}
	}
	return 0;
}
