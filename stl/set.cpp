#include<iostream>
#include<set>
#include<vector>
#include <iterator>


using namespace std;

int main(){
    set<int>m {9,4,5,1,4,2};
    vector<int>arr {8,3,4,1,3,6};
    set<int>no_dup;
    set<int>dup;
    cout<<" all unique number is"<<endl;
    for(auto &it:m){
        cout<<it<<" ";
    }
;
    for(int i=0;i<6;i++){
        if((no_dup.find(arr[i])) == no_dup.end()){
            no_dup.insert(arr[i]);
        }
        else{
            dup.insert(arr[i]);
        }
    }
    cout<<endl;
    cout<<"unique values:";
     for (auto itr = no_dup.begin(); itr != no_dup.end(); itr++) {
        cout << *itr << " ";
    }
    cout<<endl;
    cout<<"duplicates  value: ";
     for (auto itr = dup.begin(); itr != dup.end(); itr++) {
        cout << *itr << " ";
    }
    
    

    return 0;
}