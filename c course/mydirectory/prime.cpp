#include <iostream>
using namespace std;

int main() {
    int n,i;
    cout<<"enter number"<<endl;
    cin>>n;
    if(n<2){
        cout<<"Enter a number greater than equal to 2"<<endl;
        
    }
    else if(n==2){
        cout<<"lowest prime no"<<endl;
    }
    else{
        for(i=2;i<=(n-1);i++){
        if(n%i==0){
            cout<<"not prime"<<endl;
            break;
        }
        
        else{
            cout<<"prime"<<endl;
            break;
        }
        }
       
        }
        
    
        
    
    

    return 0;
}