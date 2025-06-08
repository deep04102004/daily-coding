#include<bits/stdc++.h>
using namespace std;
int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        if(n==0) return 0;
        int end=n-1;
        for(int i=0;i<=end;){
            if(nums[i]==val){
                swap(nums[i],nums[end]);
                end--;
            }
            else i++;
        }
        return (end+1);
    }
int main(){
   vector<int>nums={3,2,2,3};
   int val=3;
   cout<<removeElement(nums,val);
}