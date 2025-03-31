#include<iostream>
using namespace std;
int a = 10;//global scope
int main()
{
    int a = 20;//local scope
    cout<<"\nValue of a = "<<a;
    cout<<"\nValue of a = "<<::a;
    return 0;
}