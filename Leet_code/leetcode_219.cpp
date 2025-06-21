#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;  // value -> latest index
        for (int i = 0; i < nums.size(); i++) {
            if (mp.count(nums[i]) && i - mp[nums[i]] <= k) {
                return true;
            }
            mp[nums[i]] = i;  // update index
        }
        return false;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 2, 3, 1};
    int k = 3;

    bool result = sol.containsNearbyDuplicate(nums, k);
    if (result)
        cout << "Contains nearby duplicate within distance " << k << ": Yes" << endl;
    else
        cout << "Contains nearby duplicate within distance " << k << ": No" << endl;

    return 0;
}
