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
            cout<<"\nParameterized constructor";
            id = i;
            name = n;
        }
        Demo(Demo &obj)
        {
            cout<<"\nCopy constructor called";
            id = obj.id;
            name = obj.name;
        }
        void display()
        {
            cout<<"\nId = "<<id;
            cout<<"\nName = "<<name;
        }
};
int main()
{
    Demo d1(101,"Rohan");
    d1.display();
    Demo d2(d1);//copy constructor
    d2.display();
    Demo d3(102,"Rahul");
    Demo d4 = d3;//copy constructor
    d3.display();
    d4.display();
    return 0;
}