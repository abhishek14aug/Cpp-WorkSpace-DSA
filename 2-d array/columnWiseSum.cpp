#include<iostream>
using namespace std;

/*
void rowSum(int arr[][4],int row,int col){
    
    for(int col=0; col<4;col++){
        int sum=0;
        for(int row=0;row<3;row++){
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
    }
}
*/

void rowSum(int arr[][4],int row,int col){
    
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum+=arr[j][i];
        }
        cout<<sum<<" ";
    }
}

int main(){
    int arr[3][4]={{20,18,99,108},{27,28,29,30},{31,32,33,34}};
    rowSum(arr,3,4);
    return 0;
}