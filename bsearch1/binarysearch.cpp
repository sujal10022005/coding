#include<iostream>
using namespace std;
int bsearch(int arr[],int x,int lo,int hi){
        while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
        return mid;
    }
        else if(arr[mid]<x){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    return -1;
}
int main(){
    int n,x;
    cout<<"Name : Sujal nage"<<endl;
    cout<<"Enrollment no. : 0832CS221207"<<endl;
    cout<<"Enter size of an arr : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array : ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter no. u want to search : ";
    cin>>x;
    int lo=0;
    int hi=n-1;
    int r= bsearch(arr,x,lo,hi);
    if(r==-1)
    cout<<"Element not found";
    else{
        cout<<"The element present at this index : "<<r;
    }
}