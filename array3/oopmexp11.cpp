#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Name : Sanskar Chouksey\n";
    cout<<"Enrollment no. : 0832CS221181\n\n";
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;
    try{
        if(b==0){
            throw b;
        }
        else{
            cout<<"The value can be divide : "<<(a/b);
        }
    }
    catch(int){
        cout<<"The value can not be 0";
    }
}