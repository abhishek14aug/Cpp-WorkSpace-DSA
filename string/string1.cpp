// input output and length of string

#include<iostream>
using namespace std;

// length function
int getLength(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    
    // input
    cout<<"Enter your Name"<<endl;
    cin>>name;

    //output
    cout<<"your Name is :"<<name<<endl;
    cout<<"length is:"<<getLength(name)<<endl;
    return 0;


}