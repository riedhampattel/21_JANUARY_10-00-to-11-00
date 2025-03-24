#include<iostream>
using namespace std;

class Student
{
    public :
    int a = 10,b = 20,c = 30;
    string s = "demo";
};
int main()
{
    Student s1,s2,s3;
    cout<<"Value of a = "<<s1.a<<endl;
    cout<<"Value of s = "<<s1.s<<endl;
    cout<<"Value of a = "<<s2.a<<endl;
    cout<<"Value of a = "<<s3.a;
    return 0;
}