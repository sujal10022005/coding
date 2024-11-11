#include<iostream>
using namespace std;
void area(int r){
    cout<<"Area of circle : "<<3.14*(r*r);
}
void area(int l,int b){
    cout<<"Area of rectangle : "<<(l*b);
}
void area (float num ,int b1,int h){
    cout<<"Area of triangle : "<<(num*b1*h);
}
int main(){
    int r,l,b,b1,h;
    cout<<"Name : sujal nage\n";
    cout<<"Enrollment no. : 0832CS221207\n\n";
    cout<<"Enter radius of circle : ";
    cin>>r;
    cout<<"Enter length of rectangle : ";
    cin>>l;
    cout<<"Enter breath of rectangle : ";
    cin>>b;
    cout<<"Enter base of triangle : ";
    cin>>b1;
    cout<<"Enter height of triangle : ";
    cin>>h;
    area(r);
    cout<<"\n";
    area(l,b);
    cout<<"\n";
    area(0.5,b1,h);
}