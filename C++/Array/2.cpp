#include<iostream>
using namespace std;
int main()
{
    int a[100],b[100],c[200];
    int sizea,sizeb,i;
    cout<<"Enter the size for array a = ";
    cin>>sizea;
    for(i=0;i<sizea;i++)
    {
        cout<<"Enter the elements in a["<<i<<"] = ";
        cin>>a[i];
        c[i] = a[i];
    }

    cout<<"Enter the size for array b = ";
    cin>>sizeb;
    for(i=0;i<sizeb;i++)
    {
        cout<<"Enter the elements in b["<<i<<"] = ";
        cin>>b[i];
    }
    for(i=0;i<sizeb;i++)
    {
        c[sizea] = b[i];
        sizea++;
    }
    cout<<"\nArray a = ";
    for(i=0;i<sizea-sizeb;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nArray b = ";
    for(i=0;i<sizeb;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<"\nMerged array = ";
    for(i=0;i<sizea;i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}