#include<iostream>
using namespace std;
//square circle rectangle triangle
class Shape
{
    public :
        void shape(int side)
        {
            cout<<"\nThe area of square with side "<<side<<" is = "<<side*side;
        }
        void shape(double radius)
        {
            cout<<"\nThe area of circle with radius "<<radius<<" is = "<<3.14*(radius*radius);
        }
        void shape(int l,int b)
        {
            cout<<"\nThe area of rectangle with sides "<<l<<" and "<<b<<" is = "<<l*b;
        }
        void shape(int h,double b)
        {
            cout<<"\nThe area of triangle with base "<<b<<" and height "<<h<<" is = "<<0.5*(h*b);
        }
        void shape(double b,int h)
        {
            cout<<"\nThe area of triangle with base "<<b<<" and height "<<h<<" is = "<<0.5*(h*b);
        }
};
int main()
{
    Shape s1;
    s1.shape(4);
    s1.shape(4,5);
    s1.shape(2.5);
    s1.shape(5,6.5);
    s1.shape(6.5,5);
    return 0;
}