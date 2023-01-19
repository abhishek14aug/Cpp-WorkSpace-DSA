#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n){
    int key=arr[0];
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(arr[j-1]>arr[j]){
                arr[j-1]=arr[j];
            }
        }
    }
}

int main(){
    int arr[7]={20,5,30,40,10,60,50};
    insertion_sort(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}
