#include<iostream>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}


void rev(int arr[],int i,int n){
    if(i>=n/2)
        return;
    else
        swap(arr[i],arr[n-i-1]); // reverse
        rev(arr,i+1,n);
}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    rev(arr,0,n);
    print(arr,n);
    return 0;
}