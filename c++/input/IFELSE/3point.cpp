#include<iostream>
using namespace std;
int main(){
    float x1,x2,x3,y1,y2,y3,slope1,slope2;
    cout<<"Enter values (x1,y1)";
    cin>>x1>>y1;
    cout<<"Enter values of (x2,y2)";
    cin>>x2>>y2;
    cout<<"Enter values of (x3,y3)";
    cin>>x3>>y3;
    slope1=(y2-y1)/(x2-x1);
    slope2=(y3-y2)/(x3-x2);
    if(slope1==slope2)
    cout<<"All 3 points lie in line";
    else
    cout<<"All 3 points do not lie on same line";


}
