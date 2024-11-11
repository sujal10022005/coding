#include<iostream>
using namespace std;
int main(){
    int n,m,p,q;
    cout<<"Name : Sujal nage \n";
    cout<<"Enrollment no. : 0832CS221207 \n";
    cout<<"Enter no. of rows of matrix  : ";
    cin>>n;
    cout<<"Enter no. of columns of matrix  : ";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=m-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}