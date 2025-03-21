#include <iostream>
using namespace std;
int main()
{
    int a[100], size, index, element, i, position;
    cout << "Enter the size of an array = ";
    cin >> size;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the element in a[" << i << "] = ";
        cin >> a[i];
    }
    cout << "Enter the element = ";
    cin >> element;
    cout << "Enter the position number = ";
    cin >> position;
    index = position - 1;
    if (index <= size && index >= 0)
    {
        for (i = size - 1; i >= index; i--)
        {
            a[i + 1] = a[i];
        }
        a[index] = element;
        cout << "\nArrray after insertion = ";
        for (i = 0; i <= size; i++)
        {
            cout << a[i] << " ";
        }
    }
    else
    {
        cout << "\nIndex number is not present in an array";
    }
    return 0;
}