#include<iostream>
using namespace std;
int main()
{
    int num,i,flag,j;
    cout<<"Enter any postive number = ";
    cin>>num;//10
    cout<<"\nLast occured prime number = ";
    for(i=num;i>=2;i--)
    {
        int n = i;
        flag=1;
        for(j=2;j<n/2;j++)
        {
            if(n%j==0)
            {
                flag = 0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}