#include<iostream>
using namespace std;
int main(){
    int ch;
    cout<<"Enter a character = ";
    cin>>ch;
    int ascii = (int)ch;
    if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90)){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){

            cout<<"The character is vowel";
        }
        else{
            cout<<"The character is consonant";
        }
    }
    else{
        cout<<"The character is not an alphabet";
    }
}