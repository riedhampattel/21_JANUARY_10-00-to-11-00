#include<iostream>
using namespace std;
class Student
{
    public :
        int id;
        string name;
        double per;
        Student(int id,string name,double per)
        {
            this->id = id;
            this->name = name;
            this->per = per;
        }
};
class Address
{
    private :
        string city;
        Student *ref;
    public :
        Address(string city,Student *obj)
        {
            this->city = city;
            ref = obj;
        }
        void display()
        {
            cout<<"\nId = "<<ref->id;
            cout<<"\nName = "<<ref->name;
            cout<<"\nPercentage = "<<ref->per;
            cout<<"\nCity = "<<city;
        }

};
int main()
{
    Student s(101,"Rahul",56.45);
    Address a("Rajkot",&s);
    a.display();
    return 0;
}