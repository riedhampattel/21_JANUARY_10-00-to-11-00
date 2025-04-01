#include<iostream>
using namespace std;
template <typename T>
void swapping(T &n1,T &n2)
{
    T temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}
int main()
{
    int a = 10;
    int b = 20;
    cout<<"\nValue of a before swapping = "<<a;
    cout<<"\nValue of b before swapping = "<<b;
    swapping(a,b);
    cout<<"\nValue of a after swapping = "<<a;
    cout<<"\nValue of b after swapping = "<<b;

    char ch1 = 'A';
    char ch2 = 'B';
    cout<<"\nValue of ch1 before swapping = "<<ch1;
    cout<<"\nValue of ch2 before swapping = "<<ch2;
    swapping(ch1,ch2);
    cout<<"\nValue of ch1 after swapping = "<<ch1;
    cout<<"\nValue of ch2 after swapping = "<<ch2;

    float f1 = 56.45;
    float f2 = 48.74;
    cout<<"\nValue of a before swapping = "<<f1;
    cout<<"\nValue of b before swapping = "<<f2;
    swapping(f1,f2);
    cout<<"\nValue of f1 after swapping = "<<f1;
    cout<<"\nValue of f2 after swapping = "<<f2;

    string s1 = "Hello";
    string s2 = "Bye";
    cout<<"\nValue of a before swapping = "<<s1;
    cout<<"\nValue of b before swapping = "<<s2;
    swapping(s1,s2);
    cout<<"\nValue of s1 after swapping = "<<s1;
    cout<<"\nValue of s2 after swapping = "<<s2;
    return 0;
}