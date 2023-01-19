#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"PLZ Enter The Number"<<endl;
    cin>>number;

    if(number%2==0){
        cout<<"The Number you have entered is EVEN";
    }
    else
    {
        cout<<"The Number You Have Entered is ODD";
    }
    return 0;
}