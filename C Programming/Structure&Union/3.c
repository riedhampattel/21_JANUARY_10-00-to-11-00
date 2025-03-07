#include<stdio.h>
struct Student
{
    int id;
    char name[50];
    float per;
    char grade;
}s[100];
int size,i,choice;
void all()
{
    printf("\nId\tName\tPer.\tGrade");
    for(i=0;i<size;i++)
    {
        printf("\n%d\t%s\t%.2f\t%c",s[i].id,s[i].name,s[i].per,s[i].grade);
    }
}
void particular()
{
    int id,index,flag=0;
    printf("\nEnter the id = ");
    scanf("%d",&id);//103
    for(i=0;i<size;i++)
    {
        if(id==s[i].id)
        {
            index = i;
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("\nId is not present in an array");
    }
    else
    {
        printf("\nId\tName\tPer.\tGrade");
        printf("\n%d\t%s\t%.2f\t%c",s[index].id,s[index].name,s[index].per,s[index].grade);
    }
}
void update()
{
    int id,index,flag=0;
    printf("\nEnter the id = ");
    scanf("%d",&id);//103
    for(i=0;i<size;i++)
    {
        if(id==s[i].id)
        {
            index = i;
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("\nId is not present in an array");
    }
    else
    {
        printf("\n1.Name");
        printf("\n2.Percentage");
        printf("\nEnter the choice = ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("\nEnter the updated name = ");
                scanf("%s",s[index].name);
            break;
            case 2:
                printf("\nEnter the updated percentage = ");
                scanf("%f",&s[index].per);
                if(s[index].per>80)
                {
                    s[index].grade = 'A';
                }
                else if(s[index].per<80 && s[index].per>35)
                {
                    s[index].grade = 'B';
                }
                else
                {
                    s[index].grade = 'C';
                }
            break;
        }
    }
}
void delete()
{
    int id,index,flag=0;
    printf("\nEnter the id = ");
    scanf("%d",&id);//103
    for(i=0;i<size;i++)
    {
        if(id==s[i].id)
        {
            index = i;
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("\nId is not present in an array");
    }
    else
    {
        for(i=index;i<size-1;i++)
        {
            s[i] = s[i+1];
        }
        size--;
    }
}
int main()
{
    printf("\nEnter the count of students = ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("\nEnter the details of student %d",i+1);
        printf("\nid = ");
        scanf("%d",&s[i].id);
        printf("\nName = ");
        scanf("%s",s[i].name);
        printf("\nPercentage = ");
        scanf("%f",&s[i].per);
        if(s[i].per>80)
        {
            s[i].grade = 'A';
        }
        else if(s[i].per<80 && s[i].per>35)
        {
            s[i].grade = 'B';
        }
        else
        {
            s[i].grade = 'C';
        }
    }
    up :
    printf("\n1.Display all the details");
    printf("\n2.Display particular details");
    printf("\n3.Update the details");
    printf("\n4.Delete details");
    printf("\nEnter the choice = ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            all();
        break;
        case 2:
            particular();
        break;
        case 3:
            update();
        break;
        case 4:
            delete();
        break;
    }
    char ch;
    printf("\nPress 'Y' to coninue and 'N' to exit = ");
    scanf(" %c",&ch);
    if(ch=='Y' || ch=='y')
    {
        goto up;
    }
    else
    {
        goto down;
    }
    down:
    return 0;
}