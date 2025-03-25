#include<iostream>
using namespace std;
class BankAccount
{
    private :
        int acno;
        double balance;
    public :
        void set(int a,double b)
        {
            acno = a;
            balance = b;
        }
        void deposit(double amnt)
        {
            if(amnt>0)
            {
                balance = balance + amnt;
            }
        }
        void withdraw(double amnt)
        {
            if(amnt>0 && amnt<balance)
            {
                balance = balance - amnt;
            }
        }
        void get()
        {
            cout<<"\nAccount no = "<<acno;
            cout<<"\nBalance = "<<balance;
        }
};
int main()
{
    BankAccount b;
    b.set(123,55000);
    b.deposit(10000);
    b.withdraw(75000);
    b.get();
    BankAccount c;
    c.set(456,10000);
    c.withdraw(4500);
    c.get();
    return 0;
}