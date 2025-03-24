#include<iostream>
using namespace std;

class Student
{
    private :
    int a = 10,b = 20,c = 30;
    string s = "demo";
    public :
        void display()
        {
            cout<<"Value of a = "<<a<<endl;
            cout<<"Value of b = "<<b<<endl;
            cout<<"Value of c = "<<c<<endl;
        }
};

int main()
{
    int a,b,c;
    Student s1,s2;
    s1.display();
    s2.display();
    return 0;
}