#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0, l = n - 1;
        int ans = n;  // default insert position is at the end

        while (s <= l) {
            int mid = s + ((l - s) / 2);

            if (target == nums[mid]) {
                return mid; // target found
            }
            else if (nums[mid] > target) {
                ans = mid;   // store possible insert position
                l = mid - 1; // move left
            }
            else {
                s = mid + 1; // move right
            }
        }

        return ans; // if not found, return insert position
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 5, 6};
    int target = 4;

    int index = sol.searchInsert(nums, target);

    cout << "Target should be at index: " << index << endl;

    return 0;
}
