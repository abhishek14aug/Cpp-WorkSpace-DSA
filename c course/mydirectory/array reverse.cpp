#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    cin>>size;
    int i;
    int arr[size]; 
    int sum=0;
    for(i=0;i<size;i++){
        cin>>arr[i];
    } 
    for(int i=size-1;i>=size;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}
