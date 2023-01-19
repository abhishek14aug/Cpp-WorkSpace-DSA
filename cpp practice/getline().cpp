#include <iostream>
using namespace std;

int main()
{
    string name;
    cout<<"enter your name:\n";
    //cin>>name; not used bcs it leaves the string after space so we use getline()
    getline(cin,name);
    cout<<"welcome"<<name;
    return 0;
}