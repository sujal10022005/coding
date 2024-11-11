#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
   char a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;a[i]!='\0';i++){
        if(i%2==0) a[i]='a';
    }
    cout<<a;
}