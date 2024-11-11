#include<iostream>
#include<vector>
using namespace std;
void sort02(vector<int>&v){
    int i=0,j=v.size()-1;
    while(i<j){
        if(v[i]<0) i++;
        if(v[j]>0) j--;
        if(i>j) break;
        if(v[i]>0 && v[j]<0){
           int temp=v[i];
           v[i]=v[j];
           v[j]=temp;
            i++;
            j--;
        }
    }
}
int main(){
    vector<int>v;
    for(int i=0;i<=5;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    sort02(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}