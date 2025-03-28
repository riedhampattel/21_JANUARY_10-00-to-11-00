#include<iostream>
using namespace std;
class Demo
{
    public :
        int a,b;
    Demo operator+(Demo &obj)
    {
        Demo temp;
        temp.a = obj.a + a;
        temp.b = obj.b + b;
        return temp;
    }
    void display()
    {
        cout<<"\nValue of a = "<<a;
        cout<<"\nValue of b = "<<b<<endl;
    }
};
int main()
{
    int a = 10;
    int b = 20;
    int c = a + b;
    Demo d1;
        d1.a = 10;
        d1.b = 20;
    Demo d2;
        d2.a = 20;
        d2.b = 40;
    Demo d3;
        d3 = d1 + d2;
        d1.display();
        d2.display();
        d3.display();
    return 0;
}