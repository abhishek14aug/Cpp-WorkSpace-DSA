//print sum of n number

#include<iostream>
using namespace std;

//recursive function
int printSum(int N){
    if(N==0)
        return 0;
    
    return(N + printSum(N-1));
    
}   
 int main(){
    int N;
    cout<<"enter the number"<<endl;
    cin>>N;
   
    cout<<"sum is"<<"  "<<printSum(N)<<endl;
    
    return 0;

 }