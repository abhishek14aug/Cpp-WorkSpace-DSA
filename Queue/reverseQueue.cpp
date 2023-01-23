#include<bits/stdc++.h>
using namespace std;


void Print(queue<int>&q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}

void reverseQueue(queue<int>&q){
    stack<int>s;
    while(!q.empty()){
       s.push(q.front());
       q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}

int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    reverseQueue(q);

    Print(q);
    return 0;
}