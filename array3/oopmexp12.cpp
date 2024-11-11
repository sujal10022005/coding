#include<iostream>
#include<string>
using namespace std;
int main(){
	cout<<"Name : Sanskar Chouksey\n";
    cout<<"Enrollment no. : 0832CS221181\n\n";
    string s;
    cout<<"Enter a string : ";
    getline(cin, s);
    int vowels=0,consonants=0,digits=0,spaces=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            vowels++;
        }
        else if((s[i]>='a' && s[i]<='z') ||(s[i]>='A' && s[i]<='Z')){
            consonants++;
        }
        else if(s[i]>='0' && s[i]<='9'){
            digits++;
        }
        else if(s[i]==' '){
            spaces++;
        }
    }
    
    cout<<"No. of vowels = "<<vowels<<"\n";
    cout<<"No. of consonants = "<<consonants<<"\n";
    cout<<"No. of digits = "<<digits<<"\n";
    cout<<"No. of spaces = "<<spaces;
}