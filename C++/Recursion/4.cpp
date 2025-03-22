//Write a c++ program to find addition of all the elements present in an array using recursion
#include<iostream>
using namespace std;
int sumarr(int arr[],int s)//0
{
    if(s>0)
    {
        return arr[s-1] + sumarr(arr,s-1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a[100],size,i;
    cout<<"Enter the size of an array = ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"Enter the element in a["<<i<<"] = ";
        cin>>a[i];
    }
    int result = sumarr(a,size);
    cout<<"\nThe addition of elements = "<<result;
    return 0;
}