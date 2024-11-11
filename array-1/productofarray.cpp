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
    int p=1;
    for(int i=0;i<=n-1;i++) 
        p=p*arr[i];
    cout<<"Product of array elements is : "<<p;
}