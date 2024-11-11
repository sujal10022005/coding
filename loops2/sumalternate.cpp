#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter a number = ";
    cin>>n;
    if(n%2==0) sum=-n/2;
    else sum=-n/2+n;
    cout<<sum;

}