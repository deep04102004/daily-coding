#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int MIN = arrays[0].front();
        int MAX = arrays[0].back();
        int ans = 0;

        for (int i = 1; i < arrays.size(); i++) {
            int currMin = arrays[i].front();
            int currMax = arrays[i].back();

            ans = max({ans, abs(currMin - MAX), abs(currMax - MIN)});

            MAX = max(MAX, currMax);
            MIN = min(MIN, currMin);
        }
        return ans;
    }
};

int main() {
    vector<vector<int>> arrays = {
        {1, 2, 3},
        {4, 5},
        {1, 2, 3}
    };

    Solution sol;
    int result = sol.maxDistance(arrays);
    cout << "Maximum distance: " << result << endl;

    return 0;
}
