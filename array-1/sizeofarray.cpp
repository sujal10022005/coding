#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++)
        cin>>arr[i];
        int x;
        cout<<"Enter number : ";
        cin>>x;
        int count=0,i;
        for(i=0;i<=n-1;i++) count++;
    cout<<count;
}