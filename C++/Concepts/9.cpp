#include<iostream>
using namespace std;
class Demo
{
    private :
        int id;
        string name;
    public :
        void set(int id,string name)
        {
            this->id = id;
            this->name = name;
        }
        void display();//declaration
};
void Demo::display()//definition
{
    cout<<"\nId = "<<id;
    cout<<"\nName = "<<name;
}
int main()
{
    Demo d;
    d.set(101,"Rohan");
    d.display();
    return 0;
}