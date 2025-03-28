#include<iostream>
using namespace std;
//square circle rectangle triangle
class Shape
{
    public :
        Shape(int side)
        {
            cout<<"\nThe area of square with side "<<side<<" is = "<<side*side;
        }
        Shape(double radius)
        {
            cout<<"\nThe area of circle with radius "<<radius<<" is = "<<3.14*(radius*radius);
        }
        Shape(int l,int b)
        {
            cout<<"\nThe area of rectangle with sides "<<l<<" and "<<b<<" is = "<<l*b;
        }
        Shape(int h,double b)
        {
            cout<<"\nThe area of triangle with base "<<b<<" and height "<<h<<" is = "<<0.5*(h*b);
        }
        Shape(double b,int h)
        {
            cout<<"\nThe area of triangle with base "<<b<<" and height "<<h<<" is = "<<0.5*(h*b);
        }
};
int main()
{
    Shape s1(4);
    Shape s2(2.5);
    Shape s3(2,5);
    Shape s4(5,6.5);
    Shape s5(6.5,5);
    return 0;
}