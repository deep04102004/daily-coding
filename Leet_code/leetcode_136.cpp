#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) {
    int ans=0;
    for(int&a:nums){
        ans^=a;
    }
    return ans;
    }
int main(){
    vector<int>nums={2,2,1};
    cout<<singleNumber(nums);
}