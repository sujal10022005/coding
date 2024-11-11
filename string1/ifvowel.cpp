#include<iostream>
#include<string>
using namespace std;
int main(){
    string vowels="raghav";
    int count=0;
    for(int i=0;vowels[i]!='\0';i++){
        if(vowels[i]=='a'||vowels[i]=='e'||vowels[i]=='i'||vowels[i]=='o'||vowels[i]=='u')
        count++;
    }
    cout<<count;
}