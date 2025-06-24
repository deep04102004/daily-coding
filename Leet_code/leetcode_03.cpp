#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> s1;
        int maxi = 0;
        int i = 0, j = 0;

        while (j < s.size()) {
            if (!s1.count(s[j])) {
                s1.insert(s[j]);
                maxi = max(maxi, j - i + 1);
                j++;
            } else {
                s1.erase(s[i]);
                i++;
            }
        }

        return maxi;
    }
};
int main() {
    Solution sol;
    string input = "dvdf";  // You can change this input for testing
    int result = sol.lengthOfLongestSubstring(input);
    cout << "Length of longest substring without repeating characters: " << result << endl;
    return 0;
}
