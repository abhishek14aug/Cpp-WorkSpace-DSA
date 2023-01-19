#include <iostream>
using namespace std;

int main(){
    int n=5;
    int arr[]={};
    int max=0;
    int min= arr[0];
    int totalsum=0;

    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        totalsum=totalsum+arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]>max)
            max=arr[i];

        if(arr[i]<min)
            min=arr[i];
    }

    cout<<(totalsum-max)<<" "<<(totalsum-min);
    return 0;

}