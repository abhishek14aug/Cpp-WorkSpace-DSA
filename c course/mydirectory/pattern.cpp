#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<6;i++){
        for(int j=6;j<=0;j--){
            if(j<i-1){
            cout<<"*";
            }
        }
        cout<<endl; 
    }
    return 0;
}