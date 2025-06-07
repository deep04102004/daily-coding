#include<bits/stdc++.h>
using namespace std;
 int maxAdjacentDistance(vector<int>& nums) {
        int max_difference=0;
        int n= nums.size();
        int diff = abs(nums[0]-nums[n-1]);
       int  difference=0;
       if(n<2) return 0;
        for(int i=0;i<n-1;i++){
            difference=abs(nums[i]-nums[i+1]);
            max_difference= max(difference,max_difference); 
        }
        max_difference =max(max_difference,diff);
        return max_difference;
    }
int main(){
  vector<int>nums={-5,-10,-5};
  cout<<maxAdjacentDistance(nums);
}