#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n]; bool flag=false;
    for(int i=0;i<=n-1;i++)
        cin>>arr[i];
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]==arr[j]){
             flag=true;
            cout<<arr[i];
            break;
            }
        }
    }
    if(flag==false) cout<<"No duplicaate";
}