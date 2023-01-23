#include<bits/stdc++.h>
using namespace std;

class MyStack {
    queue<int>q1,q2;
public:
    MyStack() {
        queue<int>q1,q2;
    }
    
    void push(int x) {
        //first push x in second queue
       q2.push(x);

       //push all the remain
       while(!q1.empty()){
           q2.push(q1.front());
           q1.pop();
       }

       //swap
       queue<int>q = q1;
       q1=q2;
       q2=q;

    }
    
    int pop() {
       if(q1.empty()){
           return -1;
       }
       int ans=q1.front();
       q1.pop(); 
       return ans;
    }
    
    int top() {
        if(q1.empty()){
            return -1;
        }
        return q1.front();
    }
    
    bool empty() {
        if(q1.size()==0){
            return true;
        }
        else{
            return false;
        }
    }
};