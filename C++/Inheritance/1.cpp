#include<iostream>
using namespace std;
class Parent //base class
{
    public:
        void display()
        {
            cout<<"\nHello from parent class";
        }
};
class Child : public Parent //derived class
{

};
int main()
{
    Child c;
    c.display();
    return 0;
}