#include<iostream>
using namespace std;
template <typename T,int size>
void sort(T (&arr)[size])
{
    T temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}
int main()
{
    int a[5] = {3,2,6,1,4};
    cout<<"\nArray before sorting = ";
    
    sort(a);

    return 0;
}