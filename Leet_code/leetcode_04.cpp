#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Step 1: Concatenate nums2 into nums1
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());

        // Step 2: Sort the combined array
        sort(nums1.begin(), nums1.end());

        // Step 3: Calculate and return the median
        int n = nums1.size();
        if (n % 2 == 1) {
            return nums1[n / 2];
        }
        return (nums1[(n / 2) - 1] + nums1[n / 2]) / 2.0;
    }
};

int main() {
    Solution sol;

    // Example input arrays
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    // Find median
    double median = sol.findMedianSortedArrays(nums1, nums2);

    // Output result
    cout << "Median: " << median << endl;

    return 0;
}
