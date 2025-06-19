#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 1;
        int value = nums[0];

        for (int i = 0; i < n; i++) {
            if (nums[i] - value > k) {
                count++;
                value = nums[i];
            }
        }

        return count;
    }
};

int main() {
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int& x : nums) {
        cin >> x;
    }

    cout << "Enter k: ";
    cin >> k;

    Solution sol;
    int result = sol.partitionArray(nums, k);

    cout << "Minimum number of groups: " << result << endl;

    return 0;
}
