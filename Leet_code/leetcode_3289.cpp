#include<bits/stdc++.h>
using namespace std;
vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>v1;
        unordered_map<int,int>mp;
        for(int&a:nums)mp[a]++;
        
        for(auto&b:mp){
            if(b.second>1){
                v1.push_back(b.first);
            }
        }
        return v1;
    }
int main(){
vector<int>nums={0,3,2,1,3,2};
cout<<"Two mischivious number is :";
for(int a:getSneakyNumbers(nums)){
    cout<<a<<" ";
}
}