#include <bits/stdc++.h> 
using namespace std;
vector<int> wavePrint(int arr[][4], int nRows, int mCols)
{
    //Write your code here
    vector<int>ans;
    for(int col=0;col<mCols;col++){
    if(col&1){
//     for odd cols
        for(int row=nRows-1;row>=0;row--){
        ans.push_back(arr[row][col]);
        }
    }
    else{
//     for 0 and even cols
        for(int row=0;row<nRows;row++){
           ans.push_back(arr[row][col]);
        }
    }
    
    }
    return ans;
}

int main(){
    int arr[3][4]={20,18,99,108,27,28,29,30,31,32,33,34};
    vector<int>ok=wavePrint(arr,3,4);
    for(int i=0;i<12;i++){
        cout<<ok[i]<<" ";
    }
    return 0;
}