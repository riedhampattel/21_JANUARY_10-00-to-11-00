#include<stdio.h>
void display(int a[],int size);//declaration
int arr[100],b[100],c[100],size;
void display(int a[],int size)
{
	int i;
	printf("\nArray = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
}
void input(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element on index [%d] = ",i);
		scanf("%d",&a[i]);
	}
}
int main()
{
	printf("\nEnter the size = ");
	scanf("%d",&size);
	printf("\nEnter the elements in array a = ");
	input(arr,size);
	display(arr,size);
	
	printf("\nEnter the size = ");
	scanf("%d",&size);
	printf("\nEnter the elements in array b = ");
	input(b,size);
	display(b,size);
	
	printf("\nEnter the size = ");
	scanf("%d",&size);
	printf("\nEnter the elements in array c = ");
	input(c,size);
	display(c,size);
	return 0;
}
