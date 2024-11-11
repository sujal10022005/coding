#include<iostream>
using namespace std;
int main(){
    int n=13;
    int arr[13]={1,1,1,2,2,4,4,7,7,7,7,7,8};
    int x=1;
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid+1]!=x){
                flag=true;
                cout<<mid;
                break;
            }
            else{
                lo=mid+1;
            }
        }
        else if(arr[mid]<x) lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false) cout<<-1;
}