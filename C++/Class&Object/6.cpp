#include<iostream>
using namespace std;
class Person
{
    string name,country;
    int age;
    public :
        void set(string n,int a,string c)
        {
            name = n;
            age = a;
            country = c;
        }
        void get()
        {
            cout<<"\nName = "<<name;
            cout<<"\nAge = "<<age;
            cout<<"\nCountry = "<<country;
        }
};
int main()
{
    Person p;
    p.set("Rohan",45,"India");
    p.get();
    return 0;
}