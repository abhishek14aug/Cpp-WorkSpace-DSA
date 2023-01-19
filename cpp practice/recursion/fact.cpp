#include<iostream>
using namespace std;

// function to print factorial of a number
int fact(int n){
    //base condition
    if(n==1){
        return 1;
    }
    //induction
    return (n*fact(n-1));
}

int main(){
 int ans=fact(0);
 cout<<ans<<endl;
 return 0;
}