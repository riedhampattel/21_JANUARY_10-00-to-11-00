#include<iostream>
using namespace std;
int main()
{
    string food = "Burger";
    string &item = food;

    food = "Vadapav";
    cout<<"\nValue in food = "<<food;
    cout<<"\nAddress of food = "<<&food;
    cout<<"\nValue in item = "<<item;
    cout<<"\nAddress of item = "<<&item;
    return 0;
}