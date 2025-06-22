#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int n = s.size();
        vector<vector<int>> ans;
        string str = string(1, s[0]);
        int index = 0;

        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                str += s[i];
            } else {
                if (str.size() >= 3) {
                    ans.push_back({index, i - 1});
                }
                str = string(1, s[i]);
                index = i;
            }
        }

        // check last group
        if (str.size() >= 3) {
            ans.push_back({index, n - 1});
        }

        return ans;
    }
};

int main() {
    Solution sol;

    // Sample input
    string s = "abbxxxxzzy";

    // Get result
    vector<vector<int>> result = sol.largeGroupPositions(s);

    // Print result
    for (const auto& group : result) {
        cout << "[" << group[0] << ", " << group[1] << "] ";
    }
    cout << endl;

    return 0;
}
