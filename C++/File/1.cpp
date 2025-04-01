#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream MyFile("first.txt");
    MyFile<<"Hello this is my first attempt";
    MyFile<<"\nThis is second line in first attempt";
    MyFile.close();
    return 0;
}