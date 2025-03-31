#include<iostream>
//:: ---> scope resolution operator
using namespace std;
int main()
{
    string name;
    std::cout<<"Hello Word";
    cout<<"\nEnter the string = ";
    cin>>name;
    cout<<"\nName = "<<name;
    return 0;
}