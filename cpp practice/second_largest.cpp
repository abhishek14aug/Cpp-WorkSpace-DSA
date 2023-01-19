#include<iostream>
using namespace std;

int main(){
    int arr[4]={2,2,3,4};
    int largest = INT_MIN;
	int second_largest = INT_MIN;
	for(int i=0;i<4;i++)
    {
        
	    if(arr[i]>largest){
	        second_largest=largest;
	        largest=arr[i];
        }
	    else 
        {
            if(arr[i]>second_largest && arr[i]<=largest)
	            second_largest= arr[i];
        }
	}
	cout<<second_largest<<" ";
    return 0;
}