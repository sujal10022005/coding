#include<iostream>
using namespace std;
int lsearch(int arr[],int n,int x){
        for (int i = 0; i < n; i++)
    if (arr[i] == x)
      return i;
  return -1;
}
int main(){
    int n,x;
    cout<<"Name : Sujal nage\n";
    cout<<"Enrollment no. : 0832CS221207\n\n";
    cout<<"Enter size of an arr : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array : ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter no. u want to search : ";
    cin>>x;
    int r= lsearch(arr,n,x);
    if(r==-1)
    cout<<"Element not found";
    else{
        cout<<"The element present at this index : "<<r;
    }
}