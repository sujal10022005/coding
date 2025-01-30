#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={100,80,60,81,70,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Previous greatest index array
    int pgi[n];
    // Using stack: pop,ans,push
    stack<int>st;
    pgi[0] = 1;
    st.push(0);
    for(int i=1;i<n;i++){
        // pop all element smaller than arr[i]
        while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
        }
        // mark the ans in pgi array
        if(st.size()==0) pgi[i]=1;
        else pgi[i] = st.top();
        pgi[i] = i - pgi[i];
        // push the i
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<pgi[i]<<" ";
    }
}