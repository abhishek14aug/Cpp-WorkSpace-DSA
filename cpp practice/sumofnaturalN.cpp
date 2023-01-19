// WAP  to find the sum of first N natural number

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum is = "<<sum;
    return 0;
}