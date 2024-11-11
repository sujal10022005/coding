#include<iostream>
using namespace std;
int main(){
    int arr[5][6]={{1,1,1,1,1,1},{0,0,1,1,1,1},{1,0,1,1,0,0},{0,1,1,1,1,1},{0,0,0,1,1,1}};
    int m=5;
    int n=6;
    int row=-1;
    int maxones=-1;
    int x=1;
    for(int i=0;i<m;i++){
        int countones=0;
        int lo=0;
        int hi=n-1;
        int firstidx=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[i][mid]==x){
                if(mid==0){
                    firstidx=mid;
                    break;
                }
                else if(arr[i][mid-1]!=x){
                    firstidx=mid;
                    break;
                }
                else{
                    hi=mid-1;
                }
            }
            else if(arr[i][mid]<x) lo=mid+1;
            else hi=mid-1;
        }
       if(firstidx!=-1) countones=n-firstidx;
       if(maxones<countones)
       {
        maxones=countones;
        row=i;
       }
    }
    cout<<row<<" "<<maxones;
}