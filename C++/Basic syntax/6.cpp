#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;

    cout<<"Value of a before swapping = "<<a<<endl;
    cout<<"Value of b before swapping = "<<b<<endl;

    a = a+b;
    b = a-b;
    a = a-b;

    cout<<"Value of a after swapping = "<<a<<endl;
    cout<<"Value of b after swapping = "<<b;
    return 0;
}