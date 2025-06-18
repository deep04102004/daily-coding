#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for (int i = 0; i < nums.size(); i += 3) {
            if (nums[i + 2] - nums[i] > k) {
                return {};
            }
            ans.push_back({nums[i], nums[i + 1], nums[i + 2]});
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 4, 9, 6, 7};
    int k = 3;

    vector<vector<int>> result = sol.divideArray(nums, k);

    if (result.empty()) {
        cout << "Cannot divide array into valid groups." << endl;
    } else {
        cout << "Divided groups:" << endl;
        for (const auto& group : result) {
            for (int num : group) {
                cout << num << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
