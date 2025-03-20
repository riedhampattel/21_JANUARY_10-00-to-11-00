#include<iostream>
using namespace std;
int main()
{
    int size,a[100],b[100],i;
    cout<<"\nEnter the size of an array = ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"Enter the elements in a["<<i<<"] = ";
        cin>>a[i];
        b[i] = a[i];
    }
    cout<<"\nArray a = ";
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nCopied array = ";
    for(i=0;i<size;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}