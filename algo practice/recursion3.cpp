//print n to 1

#include<iostream>
using namespace std;

//recursive function
void printNum(int N){
    if(N==0)
        return;
    else
        cout<<N<<endl;
        printNum(N-1);
        
}
 int main(){
    int N;
    cout<<"enter the number"<<endl;
    cin>>N;
   
    printNum(N);
    return 0;

 }