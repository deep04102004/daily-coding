#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int maxone = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                count++;
            } else {
                maxone = max(maxone, count);
                count = 0;
            }
        }

        maxone = max(maxone, count);
        return maxone;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout << "Max consecutive ones: " << sol.findMaxConsecutiveOnes(nums) << endl;
    return 0;
}
