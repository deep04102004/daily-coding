#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Helper function to check if we can form at least 'p' pairs
    // such that all differences are <= maxDiff
    bool canFormPairs(vector<int>& nums, int p, int maxDiff) {
        int count = 0;
        int i = 1;
        while (i < nums.size()) {
            if (nums[i] - nums[i - 1] <= maxDiff) {
                count++;
                i += 2; // skip the next index to avoid overlap
            } else {
                i++;
            }
        }
        return count >= p;
    }

    // Main function to minimize the maximum difference of p pairs
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(), nums.end());
        int left = 0, right = nums.back() - nums.front();
        int ans = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canFormPairs(nums, p, mid)) {
                ans = mid;
                right = mid - 1; // try to minimize further
            } else {
                left = mid + 1; // need to increase allowed difference
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;

    // Test case 1
    vector<int> nums = {10, 1, 2, 7, 1, 3};
    int p = 2;

    int result = sol.minimizeMax(nums, p);
    cout << "Minimum maximum difference among " << p << " pairs: " << result << endl;

    return 0;
}
