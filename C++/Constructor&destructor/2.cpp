#include<iostream>
using namespace std;
class Demo
{
    private :
        int id;
        string name;
    public :
        Demo(int i,string n)
        {
            id = i;
            name = n;
        }
        void display()
        {
            cout<<"\nId = "<<id;
            cout<<"\nName = "<<name;
        }
        Demo()
        {

        }
};
int main()
{
    Demo d1(101,"Rohan");
    d1.display();
    Demo d2(102,"Soham");
    d2.display();
    Demo d3;
    d3.display();
    return 0;
}