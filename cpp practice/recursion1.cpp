#include<iostream>
using namespace std;


void dumb1(int n){
    if(n==0)
        return ;
    else {
       
        dumb1(n-1);
        cout<<n<<endl;
    }
}

int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    dumb1(n);
    return 0;
}