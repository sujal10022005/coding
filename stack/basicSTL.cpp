#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10); //1
    st.push(20); //2
    st.push(30); //3
    st.push(40); //4
    st.push(50); //5
// we will use extra space 
    stack<int>temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
// putting element back from temp to st
    while(temp.size()>0){
        st.push(temp.top());
        st.pop();
    }
}