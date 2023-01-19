#include<iostream>
using namespace std;

int main(){
    int a=55;
    
    //declaring pointer which contains address of variable a
    int* ptr=&a; 

    //printing address of variable a
    cout<<&a<<endl;

    //printing stored thing within ptr which is address of a
    cout<<ptr<<endl;

    //printing value of a
    cout<<a<<endl;

    //printing the value of *ptr which is value of a 
    // its also called dereferencing (* is called dereference operator)
    cout<<*ptr<<endl;
    return 0;

}