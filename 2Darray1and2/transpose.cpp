#include<iostream>
using namespace std;
int main(){
    int m;
    int n;
    cout<<"Enter number of rows : ";
    cin>>m;
    cout<<"Enter number of columns : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int t[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            t[i][j]=arr[j][i];
        }
    }
    cout<<"Transpose matrix is : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}