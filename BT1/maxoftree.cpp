#include<iostream>
#include <limits.h>
#include <math.h>
using namespace std;
class node{// this is tree node
    public:
    int val;
    node* left;
    node* right;
    node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void display(node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";  
    display(root->left);
    display(root->right);
}
int size(node* root){
    if(root==NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}
int maxintree(node* root){
    if(root==NULL) return INT_MIN;
    int lmax = maxintree(root->left);
    int rmax = maxintree(root->right);
    return max(root->val,max(lmax,rmax));
}
int main(){
    node* a = new node(1); // root
    node* b = new node(2);
    node* c = new node(3);
    node* d = new node(4);
    node* e = new node(5);
    node* f = new node(6);
    node* g = new node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    display(a);
    cout<<endl;
    cout<<size(a);
    cout<<endl;
    cout<<maxintree(a);
}