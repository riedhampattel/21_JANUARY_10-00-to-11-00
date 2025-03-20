#include<iostream>
using namespace std;
int main()
{
    int size,a[100],i,index;
    cout<<"Enter the size of an array = ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"Enter the element in a["<<i<<"] = ";
        cin>>a[i];
    }
    cout<<"\nEnter the index number = ";
    cin>>index;

    if(index>=0 && index<size)
    {
        cout<<"\nThe element present in an array on index number "<<index<<" is = "<<a[index];
    }
    else
    {
        cout<<"\nIndex number is not present in an array";
    }
    return 0;
}