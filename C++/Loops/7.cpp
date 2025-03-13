#include<iostream>
using namespace std;
int main()
{
    int r1,r2,row,i,j,k;
    cout<<"Enter odd row count = ";
    cin>>row;
    if(row%2==0)
    {
        row--;
    }
    r1 = (row/2) + 1;
    r2 = row-r1;
    int spc = r1-1;
    for(i=1;i<=r1;i++)
    {
        for(j=1;j<=spc;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<"\n";
        spc--;
    }
    int star = r2;
    for(i=1;i<=r2;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=star;k++)
        {
            cout<<"* ";
        }
        cout<<"\n";
        star--;
    }
    return 0;
}