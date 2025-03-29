#include<iostream>
using namespace std;
class Student
{
    private :
        int id;
        string name;
        char grade;
    public :
        void set(int id,string name,char grade)
        {
            this->id = id;
            this->name = name;
            this->grade = grade;
        }
        void get()
        {
            cout<<"\nId = "<<id;
            cout<<"\nName = "<<name;
            cout<<"\nGrade = "<<grade;
        }
};
int main()
{
    Student s1;
    s1.set(101,"Rohan",'B');
    s1.get();  
    return 0;
}