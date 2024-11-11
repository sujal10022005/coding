#include<iostream>
using namespace std;
int main(){
    int n,m,p,q;
    cout<<"Name : Sujal nage \n";
    cout<<"Enrollment no. : 0832CS221207 \n";
    cout<<"Enter no. of rows of matrix 1 : ";
    cin>>n;
    cout<<"Enter no. of columns of matrix 1 : ";
    cin>>m;
    cout<<"Enter no. of rows of matrix 2 : ";
    cin>>p;
    cout<<"Enter no. of columns of matrix 2 : ";
    cin>>q;
    if(m==q && n==p){
        int a[n][m];
        int b[p][q];
        cout<<"Enter elements in matrix 1 : ";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        cout<<"Enter elements in matrix 2 : ";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        int resadd[n][q];
         for(int i=0;i<n;i++){
            for(int j=0;j<q;j++){
                resadd[i][j]=0;
                    resadd[i][j]=a[i][j]+b[i][j];
             }
         }
         cout<<"Resultant Addition matrix is : ";
         cout<<endl;
          for(int i=0;i<n;i++){
            for(int j=0;j<q;j++){
                cout<<resadd[i][j]<<" ";
            }
            cout<<endl;
    }
    int ressub[n][q];
         for(int i=0;i<n;i++){
            for(int j=0;j<q;j++){
                ressub[i][j]=0;
                    ressub[i][j]=a[i][j]-b[i][j];
             }
         }
         cout<<"Resultant substraction matrix is : ";
         cout<<endl;
          for(int i=0;i<n;i++){
            for(int j=0;j<q;j++){
                cout<<ressub[i][j]<<" ";
            }
            cout<<endl;
    }
    
}

}