#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter values of x and y respectively =";
    cin>>x>>y;
    if(x==0 && y==0)
    cout<<"Points lie on origin";
    else if(x==0 && y!=0)
    cout<<"Points lie on  y-axis";
    else if(x!=0 && y==0)
    cout<<"Points lie on x-axis";
    else
    cout<<"Points lie on a plane";
}