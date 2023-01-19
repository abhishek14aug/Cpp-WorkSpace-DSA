#include <iostream>
#include <vector>
using namespace std;

void printVec(vector <int> abhishek)
{
    for(int i=0;i<abhishek.size();i++)
    {
        cout<<abhishek[i]<<" ";
        
    }
    cout<<endl;
}

int main()
{
    vector<int>abhishek;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        abhishek.push_back(ele);

    }
    printVec(abhishek);
}
