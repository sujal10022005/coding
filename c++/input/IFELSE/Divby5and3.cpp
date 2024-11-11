#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number =";
    cin>>x;
    if(x%5==0 && x%3==0){
        cout<<"Divisible by both 5 and 3";
    }
    else{
        cout<<"Not divisible";
    }
}