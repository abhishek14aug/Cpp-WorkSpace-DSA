#include<iostream>
using namespace std;
// wap to take age from user and inform him whether they r eligible or not for vote.
int main(){
    int age;
    cout<<"Enter Your age"<<endl;
    cin>>age;
    cout<<"your age is "<<age<<endl;
    if(age>=18){
        cout<<"you are eligible to vote"<<endl;
    }
    else{
        cout<<"Sorry! You are not eligible to vote"<<endl;
    }

    return 0;
}