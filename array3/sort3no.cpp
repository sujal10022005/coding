#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&v){
    int lo=0;
    int mid=0;
    int hi=v.size()-1;
    while(mid<=hi){
        if(v[mid]==2){
            int temp=v[mid];
            v[mid]=v[hi];
            v[hi]=temp;
            hi--;
        }
        else if(v[mid]==0){
            int temp=v[mid];
            v[mid]=v[lo];
            v[lo]=temp;
            lo++;
            mid++;
        }
        else mid++;
         }
    }
int main(){
    vector<int>v;
    for(int i=0;i<=5;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    sort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}