#include<iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    int sume=0,sumo=0;
    for(int i=0;i<5;i++){
        if(i%2==0) sume+=a[i];
        else sumo+=a[i];
    }
    cout<<sume-sumo;
}