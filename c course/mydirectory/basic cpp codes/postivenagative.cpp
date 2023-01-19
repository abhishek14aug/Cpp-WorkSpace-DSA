#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number"<<endl;
    cin>>number;
    if(number==0)
    {
        cout<<"The number you have entered is zero";
    }
    else if(number>0)
    {
        cout<<"Positive Number";
    }
    else
    {
        cout<<"Negative Number";
    }
    return 0;
}