#include <bits/stdc++.h>

using namespace std;

int returnMax(int arr[],int n)
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

int sumOfarray(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++)
        sum=sum+arr[i];
    return sum;
}

int main()
{
   int arr[]={};
   int n=5;
   cout<<"enter the array elements"<<endl;
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int z=sumOfarray(arr,5);
   int a=returnMax(arr, 5);
   int b=returnMin(arr,5);
   int c=z-a;
   int d=z-b;
   cout<<c<<" "<<d;
   return 0;
}