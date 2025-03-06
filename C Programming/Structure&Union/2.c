#include<stdio.h>
struct Student
{
	int id;
	float per;
	char grade;
};
int main()
{
	struct Student s[50];
	int size,i;
	printf("\nEnter the size = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the details for student %d",i+1);
		printf("\nId = ");
		scanf("%d",&s[i].id);
		printf("\nPercentage = ");
		scanf("%f",&s[i].per);
		printf("\nGrade = ");
		scanf(" %c",&s[i].grade);	
	}	
	printf("\nId\tPercentage\tGrade");
	for(i=0;i<size;i++)
	{
		printf("\n%d\t%.2f\t\t%c",s[i].id,s[i].per,s[i].grade);
	}
	return 0;
}
