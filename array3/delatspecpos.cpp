#include<iostream>
using namespace std;
int main(){
    int n,i,pos;
    cout<<"Name : Sujal nage "<<endl;
    cout<<"Enrollment number : 0832CS221207 "<<endl;
    cout<<"Enter number of elements you want in array : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements in arrays : ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the position you wnat to delete : ";
    cin>>pos;
    for(i=pos;i<=n;i++)
        a[i]=a[i+1];
    cout<<"Updated array is : ";
    for(i=0;i<n-1;i++)
        cout<<a[i]<<" ";
}