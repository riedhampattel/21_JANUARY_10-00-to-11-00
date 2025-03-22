#include<iostream>
using namespace std;
void display(int num)//0
{
    if(num!=0)
    {
        cout<<"\nHello World!";
        cout<<"\nBye";//5
        display(num-1);
    }
}
int main()
{
    display(5);
    return 0;
}