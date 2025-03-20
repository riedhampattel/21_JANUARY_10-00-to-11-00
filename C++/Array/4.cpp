#include<iostream>
using namespace std;
int main()
{
    int size,a[100],i,index=-1,element;
    cout<<"Enter the size of an array = ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"Enter the element in a["<<i<<"] = ";
        cin>>a[i];
    }
    cout<<"Enter the element you want to search = ";
    cin>>element;//5
    for(i=0;i<size;i++)
    {
        if(element==a[i])
        {
            index = i;
        }
    }
    if(index==-1)
    {
        cout<<"\nElement is not present in an array";
    }
    else
    {
        cout<<"\n"<<element<<" is present on index number "<<index;
    }
    return 0;
}