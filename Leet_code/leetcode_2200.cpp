#include <iostream>
#include <vector>
#include <unordered_set>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        unordered_set<int> s1;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != key) {
                continue;
            }
            for (int j = 0; j < nums.size(); j++) {
                if (abs(i - j) <= k && !s1.count(j)) {
                    ans.push_back(j);
                    s1.insert(j);
                }
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 4, 9, 1, 3, 9, 5};
    int key = 9, k = 1;

    vector<int> result = sol.findKDistantIndices(nums, key, k);

    cout << "K-distant indices: ";
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}
