#include<iostream>
using namespace std;
int main(){
    int a=3, b=5;
    int* p1=&a;
    int* p2=&b;
    cout<<(*p1)*(*p2);
}