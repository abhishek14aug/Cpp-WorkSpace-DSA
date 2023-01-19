#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
Node* next;
};

// function for displaying all the node's data of linked list.
void printList(Node* head){
    Node* current = head;
    while(current!=NULL){
        cout<<current->data<<" ";
        current=current->next;
    }
}

int main(){
    Node* head = new Node();
    Node* second= new Node();
    Node* third=new Node();
    Node* fourth=new Node();

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=NULL;

    printList(head);
    return 0;
}