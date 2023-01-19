#include <bits/stdc++.h>
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

// delete from begining
/* Node* deleteFromStart(Node* head){
    return head=head->next;
 }*/


// delete form end
/*void deleteFromEnd(Node* head){
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;

}*/

// delete from Node

Node* deleteGivenNode(Node* head,int val){
    Node *temp=head, *prev=NULL;
    if(head->data==val){
        return head->next;
    }
    while(temp->data!=val){
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    return head;
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
    Node* second = new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);

    head->next=second;
    second->next=third;
    third->next=fourth;

    // head=deleteFromStart(head);
    // deleteFromEnd(head);
    head=deleteGivenNode(head,20);
    printList(head);

    
}