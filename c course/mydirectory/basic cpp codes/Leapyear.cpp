// Write a program to cheak whether a year is leap year or not.

// basic known thing : feb = 29 days , 366days in year

/* Idea :
        leap year may be century year or Non century year
        in case of Century Years:
                      (year%400==0)
        in case of Non century Years :
                      (year%100!=0 && year%4==0) */

#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter the Year"<<endl;
    cin>>year;
    if((year%400==0)||(year%100!=0&&year%4==0))
    {
        cout<<"Leap Year";
    }
    else
    {
        cout<<"NOT Leap Year";
    }
    return 0;
}

