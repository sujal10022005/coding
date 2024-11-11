#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter base =";
    cin>>a;
    cout<<"Enter exponent =";
    cin>>b;
    int p=1,i;
    for(i=1;i<=b;i++){
            p*=a;
    }
    cout<<p;
}