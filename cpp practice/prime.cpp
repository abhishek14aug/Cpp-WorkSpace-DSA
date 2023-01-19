// WAP to cheak whether a number is prime number or not

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;
    if (n<2)
    {
        cout<<"Enter n greater than  equl to 2"<<endl;
    }
    else if(n==2)
    {
        cout<<"lowest prime no"<<endl;
    }
    else {
        for(int i=2;i<=n-1;i++)
        {
            if(n%i==0)
            {
                cout<<"Not Prime"<<endl;
                break;
            }
            else
            {
                cout<<"prime";
                break;
            }
        }

    }
    return 0;
}