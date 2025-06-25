#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0, ans = 0;

        for (int i = 0; i <= n; i++) {
            sum += i;
        }

        for (int& a : nums) {
            ans += a;
        }

        return abs(sum - ans);
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 0, 1}; // Example input
    cout << "Missing number is: " << sol.missingNumber(nums) << endl;
    return 0;
}
