#include<iostream>
using namespace std;
class Node{// User defined data type
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class DoublyLinkedList{// User defined data structure
public:
    Node* head;
    Node* tail;
    int size;
    DoublyLinkedList(){
        head = tail = NULL;
        size = 0;
    }

    void display(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void inserAtBegining(int val){
        Node* temp = new Node(val);
        if(size ==0) head = tail = temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        size++;
    }
    void inserAtEnd(int val){
        Node* temp = new Node(val);
        if(size ==0) head = tail = temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }
    void insertAtIndex(int idx, int val){
        if(idx<0 || idx>size) cout<<"Invald";
        else if( idx==0 ) inserAtBegining(val);
        else if (idx ==size) inserAtEnd(val);
        else{
            Node* t=new Node(val);
            Node* temp = head;
            for(int i=1; i<=idx-1; i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            t->prev=temp;
            t->next->prev=t;
            size++;
        }
    }
    int GetAtIndex(int idx){
        if(idx<0 || idx>size){
            cout<<"invalid";
            return -1;
        }
        else if(idx == 0) return head->val;
        else if(idx == size-1) return tail->val;
        else{
            if(idx<size/2){
                Node* temp = head;
                for(int i=1; i<=idx; i++){
                temp=temp->next;
                }
                return temp->val;
            }
            else{
                Node* temp=tail;
                for(int i=1; i<size-idx; i++){
                temp=temp->prev;
                }
                return temp->val;
            }
        }
    }
    void deleteAtHead(){
        if(size ==0){
            cout<<"List is empty";
            return;
        }
        head = head->next;
        if(head) head->prev=NULL;
        if(head==NULL) tail=NULL;
        size--;
    }
    void deleteAtTail(){
        if(size ==0){
            cout<<"List is empty";
            return;
        }
        if(size==1){
            deleteAtHead();
            return;
        }
        Node* temp=tail->prev;
        temp->next=NULL;
        tail=temp;
        size--;
    }
    void deleteAtIdx(int idx){
        if(size ==0){
            cout<<"List is empty";
        }
        if(idx<0 || idx>size){
            cout<<"invalid";
        }
        else if(idx == 0) deleteAtHead();
        else if(idx == size-1) deleteAtTail();
        else {
            Node* temp = head;
            for(int i=1; i<=idx-1; i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            temp->next->prev=temp;
            size--;
        }
    }
};
int main(){
    DoublyLinkedList list;
    list.inserAtEnd(10);
    list.inserAtEnd(20);
    list.inserAtEnd(30);
    list.inserAtEnd(40);
    list.display();
    list.inserAtBegining(50);
    list.display();
    list.insertAtIndex(2,60);
    list.display();
    list.deleteAtTail();
    list.display();
    list.deleteAtHead();
    list.display();
    list.inserAtEnd(90);
    list.display();
    list.deleteAtIdx(3);
    list.display();
    list.inserAtEnd(30);
    list.display();
    cout<<list.GetAtIndex(3);
}