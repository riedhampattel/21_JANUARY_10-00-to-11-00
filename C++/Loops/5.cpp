#include<iostream>
using namespace std;
int main()
{
    int n1,n2,count,GCD,i;
    cout<<"\nEnter the value in n1 = ";
    cin>>n1;//4
    cout<<"\nEnter the value in n2 = ";
    cin>>n2;//6

    count = n1>n2 ? n2 : n1;

    for(i=1;i<=count;i++)//5/4
    {
        if(n1%i==0 && n2%i==0)
        {
            GCD = i;
        }
    }
    cout<<"\nGCD = "<<GCD;
    return 0;
}
