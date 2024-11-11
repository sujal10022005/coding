#include<iostream>
#include<vector>
using namespace std;
int main(){
    int target,rows,cols;
    cout<<"enter targeted value : ";
    cin>>target;
    cout<<"enter no. of rows : ";
    cin>>rows;
    cout<<"enter no. of cols : ";
    cin>>cols;
    vector<vector<int>>matrix;
    for(int i=0;i<rows;i++){
            vector<int>a(i);
            matrix.push_back(a);
    }
    int i=0;
        int j=cols-1;
        while(i<=rows-1 && j>=0){
        if(matrix[i][j]==target) return true;
        else if(matrix[i][j]>target) j--;
        else i++;
        }

}