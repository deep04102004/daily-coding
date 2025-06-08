#include<bits/stdc++.h>
using namespace std;
int largestPerimeter(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());  // Sort in descending order

        for (int i = 0; i < (int)nums.size() - 2; i++) {
            if (nums[i] < nums[i + 1] + nums[i + 2]) {
                return nums[i] + nums[i + 1] + nums[i + 2];
            }
        }
        return 0;  // No valid triangle found
    }
int main(){
   vector<int>nums={2,1,2};
   cout<<largestPerimeter(nums);
}