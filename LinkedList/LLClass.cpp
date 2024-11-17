#include<iostream>
using namespace std;
class Node{// User defined data type
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class LinkedList{// User defined data structure
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
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
            head=temp;
        }
        size++;
    }
    void inserAtEnd(int val){
        Node* temp = new Node(val);
        if(size ==0) head = tail = temp;
        else{
            tail->next=temp;
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
            Node* temp = head;
            for(int i=1; i<=idx; i++){
                temp=temp->next;
            }
            return temp->val;
        }
    }
    void deleteAtHead(){
        if(size ==0){
            cout<<"List is empty";
            return;
        }
        head = head->next;
        size--;
    }
    void deleteAtTail(){
        if(size ==0){
            cout<<"List is empty";
            return;
        }
        Node* temp = head;
        while(temp -> next!= tail){
            temp = temp -> next;
        }
        temp -> next = NULL;
        tail = temp;
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
            size--;
        }
    }
};
int main(){
    LinkedList ll;
    ll.inserAtEnd(10); //{10->NULL}
    ll.display();
    ll.inserAtEnd(20); //{10->20->NULL}
    ll.display();
    ll.inserAtBegining(50);//{50->10->20->NULL}
    ll.display();
    ll.inserAtBegining(55);//{55->50->10->20->NULL}
    ll.display();
    ll.insertAtIndex(2,40);//{55->50->40->10->20->NULL}
    ll.display();
    cout<<ll.GetAtIndex(2)<<endl;// 40
    ll.deleteAtHead();//{50->40->10->20->NULL}
    ll.display();
    ll.deleteAtTail();//{50->40->10->NULL}
    ll.display();
    ll.deleteAtIdx(2);//{50->40->NULL}  
    ll.display();

}