#include<iostream>
using namespace std;
class Date
{
    private :
        int day,year;
        string month;
    public :
        int flag = 1;
        void set(int d,int m,int y)
        {
            if((y%4==0) && (m==2) && (d>0 && d<=29))
            {
                day = d;
                month = "February";
                year = y;
            }
            else if((y%4!=0) && (m==2) && (d>0 && d<=28))
            {
                day = d;
                month = "February";
                year = y;
            }
            else if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && (d>0 && d<=31))
            {
                day = d;
                switch(m)
                {
                    case 1:
                        month = "January";
                    break;
                    case 3:
                        month = "March";
                    break;
                    case 5:
                        month = "May";
                    break;
                    case 7:
                        month = "July";
                    break;
                    case 8:
                        month = "August";
                    break;
                    case 10:
                        month = "October";
                    break;
                    case 12:
                        month = "December";
                    break;
                }
                year = y;
            }
            else if((m==4 || m==6 || m==9 || m==11) && (d>0 && d<=30))
            {
                day = d;
                switch(m)
                {
                    case 4:
                        month = "April";
                    break;
                    case 6:
                        month = "June";
                    break;
                    case 9:
                        month = "September";
                    break;
                    case 11:
                        month = "November";
                    break;
                }
                year = y;
            }
            else
            {
                flag = 0;
            }
        }
        void get()
        {
            if(flag==1)
            {
                cout<<"\n"<<day<<" - "<<month<<" - "<<year;
            }
            else
            {
                cout<<"\nInvalid date";
            }
        }
};
int main()
{
    Date d;
    d.set(31,11,2025);
    d.get();
    return 0;
}