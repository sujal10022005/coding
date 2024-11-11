#include<iostream>
using namespace std;
int main(){
    int n,i,x,pos;
    cout<<"Name : Sujal nage "<<endl;
    cout<<"Enrollment number : 0832CS221207 "<<endl;
    cout<<"Enter number of elements you want in array : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements in arrays : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter number you want to add to array : ";
    cin>>x;
    cout<<"Enter the position at which you want to add element : ";
    cin>>pos;
    for(i=n-1;i>=pos;i--)
        a[i+1]=a[i];
    a[pos]=x;
    cout<<"Updated array is : ";
    for(i=0;i<n+1;i++){
        cout<<a[i]<<" ";
        }
}