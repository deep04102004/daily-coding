#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> unique;

        for (int& a : nums) mp[a]++;             // count frequencies (only keys matter)
        for (auto& b : mp) unique.push_back(b.first); // extract unique values

        sort(unique.begin(), unique.end());      // sort the unique values
        int n = unique.size();

        if (n <= 2) {
            return unique[n - 1];                // return max if < 3 distinct
        }

        return unique[n - 3];                    // return 3rd max
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 2, 3, 1};  // Example input
    cout << "Third maximum number is: " << sol.thirdMax(nums) << endl;
    return 0;
}
