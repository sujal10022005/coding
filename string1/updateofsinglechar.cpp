#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
   char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;arr[i]!='\0';i++){
        if(i%2==0) arr[i]='a';
    }
    cout<<arr;
}