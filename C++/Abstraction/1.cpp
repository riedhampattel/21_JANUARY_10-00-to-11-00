#include<iostream>
using namespace std;
class Demo
{
    private :
        int x = 10;
        string s1 = "Private";
    protected :
        int y = 20;
        string s2 = "Protected";
    public :
        int z = 30;
        string s3 = "Public";
        void display()
        {
            cout<<"\nValue of x = "<<x;
            cout<<"\nValue of s1 = "<<s1;
        }
};
class Derived : public Demo
{
    public :
        void display()
        {
            cout<<"\nValue of y = "<<y;
            cout<<"\nValue of s2 = "<<s2;        
        }
};
int main()
{
    Demo d1;
    cout<<"\nValue of z = "<<d1.z;
    cout<<"\nValue of s3 = "<<d1.s3;

    Derived d2;
    d2.display();
    d1.display();
    return 0;
}