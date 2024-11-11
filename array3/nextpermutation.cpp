#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>&nums, int i ,int j){
    int temp=nums[i];
    nums[i]=nums[j];
    nums[j]=temp;
    i++;
    j--;
}
void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int idx=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }
        if(idx==-1){
            reverse(nums,0,n-1);
            //return;
        }
    reverse(nums,idx+1,n-1+1);
    int j=-1;
    for(int i=idx+1;i<n;i++){
        if(nums[i]>nums[idx]){
            j=i;
            break;
        }
    }
    int temp=nums[idx];
    nums[idx]=nums[j];
    nums[j]=temp;
 
    }
int main(){
    vector<int>nums;
    for(int i=0;i<=3;i++){
        int q;
        cin>>q;
        nums.push_back(q);
    }
    nextPermutation(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}