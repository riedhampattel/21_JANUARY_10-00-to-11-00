#include<stdio.h>
struct Student
{
	int roll;
	char grade;
	float per;
};
int main()
{
	struct Student s1,s2,s3;
	s1.roll=101;
	s1.per=98.56;
	s1.grade='A';
	printf("\nRoll no. = %d",s1.roll);
	printf("\nPercentage = %.2f",s1.per);
	printf("\nGrade = %c",s1.grade);
	
	printf("\nEnter the roll no. = ");
	scanf("%d",&s2.roll);
	printf("\nEnter the percentage = ");
	scanf("%f",&s2.per);
	printf("\nEnter the grade = ");
	scanf(" %c",&s2.grade);
	printf("\nRoll no. = %d",s2.roll);
	printf("\nPercentage = %.2f",s2.per);
	printf("\nGrade = %c",s2.grade);
	return 0;
}
