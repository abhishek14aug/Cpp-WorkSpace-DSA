#include<bits/stdc++.h>
using namespace std;

class MyQueue {
    stack<int>s1,s2;
public:
    MyQueue() {
       
    }
    
    void enQueue(int x) {
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
    
    int deQueue() {
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

int main()
{
    MyQueue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
  
    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';
  
    return 0;
}