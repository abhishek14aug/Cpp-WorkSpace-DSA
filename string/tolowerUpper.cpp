#include<iostream>
using namespace std;

char toUpperCase(char ch){
    if(char (ch>='A')&& char(ch<='Z')){
        return ch;
    }
    else{
        char temp=ch-'a'+'A';
        return temp;
    }
}

char toLowerCase(char ch){
    if(char (ch >='a') && char (ch<='z') ){
        return ch;
    }
    else{
        char temp= ch-'A'+'a';
        return temp;
    }
}

int main(){

    char ch;


    cout<<"Enter the Character in uppercase"<<endl;
    cin>>ch;

    cout<<toLowerCase(ch)<<endl;

    cout<<"Enter the Character in Lowercase"<<endl;
    cin>>ch;
    cout<<toUpperCase(ch)<<endl;
    

    return 0;

}