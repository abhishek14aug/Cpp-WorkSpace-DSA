#include<iostream>
using namespace std;

bool isPresent(int arr[][4],int target, int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}



int main(){
    int arr[3][4]={20,18,99,108,27,28,29,30,31,32,33,34};
    int target = 79;
    if(isPresent(arr,target,3,4)){
        cout<<"Element Found"<<endl;

    }
    else{
        cout<<"Not Found"<<endl;
    }
}


// TC :- O(row*col)