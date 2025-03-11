#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=20;
    int temp;
    cout<<"Value of a before swapping = "<<a<<endl;
    cout<<"Value of b before swapping = "<<b<<endl;

    temp = a;
    a = b;
    b = temp; 

    cout<<"Value of a after swapping = "<<a<<endl;
    cout<<"Value of b after swapping = "<<b;
    return 0;
}