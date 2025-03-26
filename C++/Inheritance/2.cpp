#include<iostream>
using namespace std;
class GrandParent
{
    public :
        void display1()
        {
            cout<<"\nHello from Grand Parent class";
        }
};
class Parent : public GrandParent
{   
    public :
        void display2()
        {
            cout<<"\nHello from Parent class";
        }
};
class Child : public Parent
{
    public :
        void display3()
        {
            cout<<"\nHello from Child class";
        }
};
class GrandChild : public Child
{

};
int main()
{
    GrandParent gp;
    gp.display1();
    Parent p;
    p.display1();
    p.display2();
    Child c;
    c.display1();
    c.display2();
    c.display3();
    GrandChild gc;
    gc.display1();
    gc.display2();
    gc.display3();
    return 0;
}