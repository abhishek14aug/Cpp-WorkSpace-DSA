#include<iostream>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}


void rev(int arr[],int l,int h){
    if(l>=h)
        return;
    else
        swap(arr[l],arr[h]);
        rev(arr,l+1,h-1);
}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    rev(arr,0,n-1);
    print(arr,n);
    return 0;
}