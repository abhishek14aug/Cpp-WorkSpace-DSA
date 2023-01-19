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

Node* insertAtStart(Node* head){
    Node* temp=new Node(50);
    temp->next=head;
    return temp;
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
   
   head->next=second;
   second->next=third ;

   head=insertAtStart(head);
   printList(head);
   return 0;
   


}