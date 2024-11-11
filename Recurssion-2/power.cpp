#include<iostream>
using namespace std;
int pow(int x,int n){
    int ans=0;
    if(n==0) return 0;
    if(n%2==0)
        int ans=pow(x,n/2);
    if(n%2!=0)
        int ans=pow(x,n/2)*x;        
    return ans;
}
int main(){
    cout<<pow(3,3);
}