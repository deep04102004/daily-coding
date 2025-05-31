#include<bits/stdc++.h>
using namespace std;
vector<int>two_sum(vector<int>nums,int target){
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        int comp=target-nums[i];
        if(mp.count(comp)){
            return {mp[comp],i};
        }
        mp[nums[i]]=i;
    }
    return {};
}
int main(){
     vector<int>nums={2,7,11,15};
     int target=9;
     cout<<"Index of two number is: ";
     for(int m:two_sum(nums,target)){
        cout<<m<<" ";
     }
}