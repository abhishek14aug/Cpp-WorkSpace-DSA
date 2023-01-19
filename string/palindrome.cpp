#include<iostream>
using namespace std;


bool checkpalindrome(char name[],int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        if(name[s]!=name[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}





int getLength(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    
    cout<<"Enter Your Name"<<endl;
    cin>>name;

    cout<<"Your Name is:"<<name<<endl;

    int len=getLength(name);
    cout<<"Length is:"<<len<<endl;

   
   cout<<"palindrome or NOt:"<<checkpalindrome(name,len)<<endl;
   return 0;


}