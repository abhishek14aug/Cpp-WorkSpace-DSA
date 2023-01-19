#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

int main(){
    //creating all three nodes(with address) with named head,second,third.
    Node* head = new Node();
    Node* second=new Node();
    Node* third = new Node();

    //assigning "value in data" and "address of next node in next" in head node.
    head->data=10;
    head->next=second;

    //assigning "value in data" and "address of next node in next" in second node.
    second->data=20;
    second->next=third;

    //assigning "value in data" and "NULL in next" in third node.
    third->data=30;
    third->next=NULL;

    return 0;
}
