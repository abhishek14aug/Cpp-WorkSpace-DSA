#include<iostream>
using namespace std;

void rowSum(int arr[][4],int row,int col){
    
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
}

int main(){
    int arr[3][4]={20,18,99,108,27,28,29,30,31,32,33,34};
    rowSum(arr,3,4);
    return 0;
}