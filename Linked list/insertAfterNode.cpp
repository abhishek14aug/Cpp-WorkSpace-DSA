#include<bits/stdC++.h>
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

void insertAfterNode(Node* head,int val){
    Node* new_node=new Node(50);
    Node* temp=head;
    while(temp->data!=val){
        temp=temp->next;
    }
    new_node->next=temp->next;
    temp->next=new_node;
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
    Node* third=new Node(30);
    Node* fourth=new Node(40);

    head->next=second;
    second->next=third;
    third->next=fourth;

    // insert after node
    insertAfterNode(head,20);
    printList(head);
    return 0;

}