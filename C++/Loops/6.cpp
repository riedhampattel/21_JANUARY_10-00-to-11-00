#include<iostream>
using namespace std;
int main()
{
    int term,num=1,sum=0,i;
    cout<<"Enter the number of terms = ";
    cin>>term;
    for(i=1;i<=term;i++)
    {
        sum = sum + num;
        num = (num*10) + 1;
    }
    cout<<"\nThe addition is = "<<sum;
    return 0;
}