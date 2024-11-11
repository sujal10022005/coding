#include<iostream>
using namespace std;
void display(int a[],int size){
    for(int i=0;i<=size-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void change(int b[],int size){
    b[0]=100;
}
int main(){
    int arr[5]={1,2,4,7,46};
    int size=sizeof(arr)/4;
    cout<<size<<endl;
    display(arr,size);
    change(arr,size);
    display(arr,size);
}