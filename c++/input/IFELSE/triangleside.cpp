#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first nummber = ";
    cin>>a;
    cout<<"Enter second nummber = ";
    cin>>b;
    cout<<"Enter third nummber = ";
    cin>>c;
    if((a+b>c) && (b+c>a) && (c+a>b)){
        cout<< a << b << c <<"is the side of a triangle";
    }
    else{
        cout<<"Invalid triangle";
    }
}