#include<iostream>
#include<stack>
using namespace std;
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
void PushAtBottom(stack<int>& st, int val){
    stack<int>helper;
    while(st.size()>0){
        helper.push(st.top());
        st.pop();
    }
    st.push(val); 
    while(helper.size()>0){
        st.push(helper.top());
        helper.pop();
    }
}
void PushAtIdx(stack<int>& st,int idx,int val){
    stack<int>temp;
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10); //1
    st.push(20); //2
    st.push(30); //3
    st.push(40); //4
    st.push(50); //5
    print(st);
    cout<<endl;
    PushAtBottom(st,60);
    print(st);
    cout<<endl;
    PushAtIdx(st,2,70);
    print(st);
}