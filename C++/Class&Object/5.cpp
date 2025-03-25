#include<iostream>
using namespace std;
class Circle
{
    private :
        double radius;
    public :
        void set()
        {
            cout<<"\nEnter the radius = ";
            cin>>radius;
        }
        void area()
        {
            cout<<"\nArea of circle = "<<3.14*(radius*radius);
        }
        void cir()
        {
            cout<<"\nCircuference of circle = "<<2*(3.14*radius);
        }
};
int main()
{
    Circle c;
    c.set();
    c.area();
    c.set();
    c.cir();
    return 0;
}