#include <iostream>
using namespace std;
int main(){
   int a,b,c,d,e,f,n;
   cout<<"enter the value of a and b"<<endl;
   cin>>a;
   cin>>b;
   cout<<"Enter the operation no which you want to perform"<<endl;
   cout<<"for: sum enter 1,subtraction 2,multip 3 and divide 4"<<endl;
   
  
   
  
   
   
   int op=n;
   cin>>n;
   
   switch(op){
        case 1:{
           c=a+b;
           cout<<c;
           break;
           }
        case 2:{
           d=a-b;
           cout<<d;
           break;
           }
        case 3:{
           e=a*b; 
           cout<<e;
           break;
           }
        case 4:{
            f=a/b; 
           cout<<f;
           break;
           }
        
          
         
           
   }

   
    return 0;
}