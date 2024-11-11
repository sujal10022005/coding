#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++)
        cin>>arr[i];
    int x;
    cout<<"Enter the element you want to search : ";
    cin>>x;
    bool flag=false;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x) flag=true;
}
if(flag==true) cout<<"Element found";
else cout<<"Element not found";
}