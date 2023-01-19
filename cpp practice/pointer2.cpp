#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a=10;
    int b=11;
    int sum=0;
    int *ptr1=&a;
    int *ptr2=&b;
    sum=(*ptr1+*ptr2);
    int sub=0;
    sub=(*ptr1-*ptr2);
    
    
    cout<<sum<<endl;
    cout<<abs(sub)<<endl;
    return 0;

}