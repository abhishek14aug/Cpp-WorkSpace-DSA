#include<iostream>
using namespace std;

int returnmax(int arr[],int n)
{
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}

int returnMin(int arr[],int n)
{
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min)
            min=arr[i];
    }
    return min;
}

int main(){
    int arr[5]={1,2,4,6,9};
    int max=returnmax(arr,5);
    cout<<"maximum number is "<<max<<endl;
    int min=returnMin(arr,5);
    cout<<"minimum number is "<<min;
    return 0;
}

