#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }

};


void insertAtLast(Node* head){
    Node* new_node=new Node(50);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
    new_node->next=NULL;
}


 void printList(Node* head){
    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;

    }
}

int main(){
   Node* head=new Node(10);
   Node* second=new Node(20);
   Node* third = new Node(30);
   Node* fourth=new Node(40);
   
   head->next=second;
   second->next=third;
   third->next=fourth;

   insertAtLast(head);
   printList(head);
   return 0;
   


}