#include<iostream>
using namespace std;

int fibo(int term)
{
    if(term==0)
    {
        return 0;
    }
    else if(term==1)
    {
        return 1;
    }
    else
    {
        return fibo(term-1) + fibo(term-2);
    }
}

int main()
{
    int num;
    cout<<"Enter the term = ";
    cin>>num;//2
    int result = fibo(num);
    cout<<"\nnth element of the series = "<<result;
    return 0;
}