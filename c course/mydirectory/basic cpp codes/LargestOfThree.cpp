// WAP to find the largest Among three numbers

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the value of a,b,c"<<endl;
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<"Largest of three is a";
    }
    else if(b>a&&b>c)
    {
        cout<<"Largest of three is b";
    }
    else{
        cout<<"Largest of three is c";
    }
    return 0;

}