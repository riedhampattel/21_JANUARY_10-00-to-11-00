//Write a c++ program to find the power of given elements using recursion
#include<iostream>
using namespace std;

int power(int b,int e)
{
    if(e==0)
    {
        return 1;
    }
    else if(e==1)
    {
        return b;
    }
    else
    {
        return b * power(b,e-1);
    }
}

int main()
{
    int base,exp;
    cout<<"Enter the base = ";
    cin>>base;//2
    cout<<"Enter the exponent = ";
    cin>>exp;//3
    int result = power(base,exp);
    cout<<"\nThe power is = "<<result;
    return 0;
}