#include<iostream>
using namespace std;

class Student
{
    private :
        int id;
        string name;
        double per;
    public :
        void set()
        {
            cout<<"\nEnter the id = ";
            cin>>id;
            cout<<"\nEnter the name = ";
            cin>>name;
            cout<<"\nEnter the percentage = ";
            cin>>per;
        }
        void get()
        {
            cout<<"\nId = "<<id;
            cout<<"\nName = "<<name;
            cout<<"\nPercentage = "<<per<<endl;
        }
};

int main()
{
    Student s1;
    s1.set();
    s1.get();   
    Student s2;
    s2.set();
    s2.get();
}