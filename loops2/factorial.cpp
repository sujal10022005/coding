#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number =";
    cin>>n;
    int p=1;
    for(int i=1;i<=n;i++){
        p*=i;
        cout<<p<<endl;
    }
   // cout<<"Factorial of a number "<<n<<" is "<<p;
}