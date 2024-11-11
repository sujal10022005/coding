#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(8);
    v.push_back(9);
    v.push_back(4);
    v.push_back(2);
    v.push_back(9);
    v.push_back(4);
    v.push_back(2);
    int x=9;
    int idx=-1;
    for(int i=0;i<v.size();i++)
    if(v[i]==x) idx=i;
    cout<<idx;
}
