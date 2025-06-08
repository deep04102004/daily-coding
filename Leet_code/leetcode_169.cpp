#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int&a:nums) mp[a]++;
        int max_value=INT_MIN;
        int max_key;
        for(auto&b:mp){
            if(b.second>max_value){
                max_value=b.second;
                max_key=b.first;
            }
        }
        return max_key;
    }
int main(){
  vector<int>nums={2,2,1,1,1,2,2};
  cout<<majorityElement(nums);
}