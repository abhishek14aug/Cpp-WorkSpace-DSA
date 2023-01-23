#include<bits/stdc++.h>.h>
using namespace std;

class MyQueue {
    stack<int>s1,s2;
public:
    MyQueue() {
       
    }
    
    void push(int x) {
       //enqueue operation
       while(!s1.empty()){
           s2.push(s1.top());
           s1.pop();
       } 
       s1.push(x);
       while(!s2.empty()){
           s1.push(s2.top());
           s2.pop();
       }
    }
    
    int pop() {
        if(s1.empty()){
            return -1;
        }
        int ans=s1.top();
        s1.pop();
        return ans;
    }
    
    int peek() {
        int ans=s1.top();
        return ans;
    }
    
    bool empty() {
        if(s1.size()==0){
            return true;
        }
        else{
            return false;
        }
    }
};