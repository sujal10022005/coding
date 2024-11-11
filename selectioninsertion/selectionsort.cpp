#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={5,3,1,4,2};
    int n=5;
    cout<<"Name : Sujal nage\n";
    cout<<"Enrollment no. : 0832CS221207\n\n"; 
    cout<<"Unsorted array : ";
    for(int ele : arr)
    cout<<ele<<" ";
    cout<<endl;
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int mindx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                mindx=j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
    cout<<"Sorted array : ";
    for(int ele : arr)
    cout<<ele<<" ";   
}
