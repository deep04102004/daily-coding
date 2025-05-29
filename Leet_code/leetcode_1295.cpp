#include<bits/stdc++.h>
using namespace std;
int findNumbers(vector<int>& nums) {
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int digitCount = 0;

            while (num != 0) {
                num /= 10;
                digitCount++;
            }

            if (digitCount % 2 == 0) {
                count++;
            }
        }

        return count;
    }
int main(){
    vector<int>nums={12,345,2,6,7896};
    cout<<"total number of number with even digits: "<<findNumbers(nums);
}