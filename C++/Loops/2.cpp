#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int start,end,num,temp,power,digit,i,sum,rem,j;
    cout<<"Enter the starting number = ";
    cin>>start;
    cout<<"Enter the ending number = ";
    cin>>end;
    cout<<"\nArmstrong numbers between "<<start<<" and "<<end<<" = ";
    for(i=start;i<=end;i++)
    {
        num = i;
        temp = i;
        digit=0;
        sum=0;
        while(num!=0)
        {
            num = num/10;
            digit++;
        }
        for(j=1;j<=digit;j++)
        {
            rem = temp%10; 
            power = pow(rem,digit);
            sum = sum + power;
            temp = temp/10;
        }
        if(sum==i)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}