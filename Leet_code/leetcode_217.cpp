#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int& a : nums) {
            mp[a]++;
        }
        for (auto& it : mp) {
            if (it.second > 1) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 2, 3, 4, 1};  // Example input with duplicate

    bool result = sol.containsDuplicate(nums);
    if (result)
        cout << "Contains duplicate: Yes" << endl;
    else
        cout << "Contains duplicate: No" << endl;

    return 0;
}
