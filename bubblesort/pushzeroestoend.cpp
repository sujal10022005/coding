#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int str={5,0,1,0,2,0,4,0,3};
     for(int i=0;i<10;i++){
        bool flag=true;
        for(int j=0;j<10-1-i;j++){
            if(str[j]==0){
                    swap(str[j],str[j+1]);
                    flag=false;
            }
        }
        if(flag==true) break;
    }
}