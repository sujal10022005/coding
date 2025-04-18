#include<iostream>
using namespace std;
class Node{// Linked List Node
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }

};
void display(Node *a){
        Node *temp=a;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
}
int size(Node *a){
    Node *temp = a;
    int n = 0;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }
    return n;
}
int main(){
    Node *a=new Node(10);
    Node *b=new Node(20);
    Node *c=new Node(30);
    Node *d=new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    display(a);
    cout<<size(a);
}
