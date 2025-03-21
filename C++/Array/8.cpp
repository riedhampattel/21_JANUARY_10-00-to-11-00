#include <iostream>
using namespace std;
int main()
{
    int a[100], size, index = -1, element, i;
    cout << "Enter the size of an array = ";
    cin >> size;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the element in a[" << i << "] = ";
        cin >> a[i];
    }
    cout << "Enter the element = ";
    cin >> element;
    for(i=0;i<size;i++)
    {
        if(element==a[i])
        {
            index = i;
        }
    }
    if (index!=-1)
    {
        for (i = index; i < size - 1; i++)
        {
            a[i] = a[i + 1];
        }
        cout << "\nArray after deletion = ";
        for (i = 0; i < size - 1; i++)
        {
            cout << a[i] << " ";
        }
    }
    else
    {
        cout << "\nElement is not present in an array";
    }
    return 0;
}