#include<iostream>
#include<stack>
using namespace std;
void displayRev(stack<int>& st){
    if(st.size()==0) return;
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    displayRev(st);
    st.push(x);
}
void PushAtBottom(stack<int>& st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    PushAtBottom(st,val);
    st.push(x);
}
void print(stack<int> st){
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
// putting element back from temp to st
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    PushAtBottom(st,-10);
    cout<<endl;
    print(st);
}