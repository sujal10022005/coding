#include<iostream>
using namespace std;
void removechar(string ans, string original ,int idx){
    if(idx==original.length()){
        cout<<ans;
        return;
    }
    char ch=original[idx];
    if(ch=='p') removechar(ans,original,idx+1);
    else removechar(ans+ch,original,idx+1);
}
int main(){
    string str="physics";
    removechar("",str,0);
}