#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"No. of lines =";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int k=0;k<n-i-1;k++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<(char)('A'+j);
        }
        cout<<endl;
    }

}