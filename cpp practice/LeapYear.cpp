#include <iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter Year"<<endl;
    cin>>year;
    if((year%400==0)||((year%100!=0)&&(year%4==0)))
    {
        cout<<"LeapYear";
    }
    else
    {
        cout<<"Not a Leap Year";
    }
    return 0;
}