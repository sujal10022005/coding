#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={5,30,1,-4,2};
    int n=5;
    cout<<"Name : Sujal nage\n";
    cout<<"Enrollment no. : 0832CS221207\n\n"; 
    cout<<"Unsorted array : ";
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
    cout<<"Sorted array : ";
    for(int ele : arr)
    cout<<ele<<" ";   
}