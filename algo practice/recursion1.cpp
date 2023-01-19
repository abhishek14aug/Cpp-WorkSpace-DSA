//print name five times

#include<iostream>
using namespace std;

//recursive function
void printName(int N){
    if(N==0)
        return;
    else
        cout<<"Abhishek"<<endl;
        printName(N-1);
}
 int main(){
    int N;
    cout<<"enter the number"<<endl;
    cin>>N;
   
    printName(N);
    return 0;

 }