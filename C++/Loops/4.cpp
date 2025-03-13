#include<iostream>
using namespace std;
int main()
{
    int num,flag = 1,i,loop=0;
    cout<<"Enter the number = ";
    cin>>num;//100
    for(i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            flag = 0;
            break;
        }
        loop++;
    }
    cout<<"\nLoop = "<<loop;
    if(flag==1)
    {
        cout<<"\nPrime";
    }
    else
    {
        cout<<"\nNot Prime";
    }
    return 0;
}