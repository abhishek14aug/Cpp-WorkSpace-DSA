// FIBONACCI Series- is a series of number formed by the preceding two numbers in the series.

// The first two terms are 0 and 1 respectively.

// The Terms after this are generated by simply adding the previous two terms.

// 0,1,1,2,3,5,8,13,21.........

#include <iostream>
using namespace std;


int main(){
    int n,a=-1,b=1,c;
    cout<<"Enter NO of trems"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        c=a+ b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}     

