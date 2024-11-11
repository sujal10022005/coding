#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>&v){
    int noo=0,noz=0;
    for(int i=0;i<=v.size();i++){
        if(v[i]==0) noz++;
        else noo++;
    }
    for(int i=0;i<v.size();i++){
        if(i<noz) v[i]=0;
        else v[i]=1;
    }
}
void sort02(vector<int>&v){
    int i=0,j=v.size()-1;
    while(i<j){
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        if(i>j) break;
        if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1;
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