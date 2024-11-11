#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={5,1,5,5,2,3};
    int n=6;
    for(int ele : arr)
    cout<<ele<<" ";
    cout<<endl;
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    //storinng sorted arr
    int x=0;
    for(int i=0;i<n;i++){
        x*=10;
        x+=arr[i];
    }
    cout<<x;
    //for 2 min we need to change the sorted arr
    for(int i=n-1;i>=1;i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    cout<<endl;
    //making this arr into integer
    int y=0;
    for(int i=0;i<n;i++){
        y*=10;
        y+=arr[i];
    }
    cout<<y<<endl;
    cout<<"Minimum sum is : "<<x+y;
}