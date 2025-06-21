#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDeletions(string word, int k) {
        unordered_map<char, int> mp;
        for (char& ch : word) {
            mp[ch]++;
        }

        vector<int> freq;
        for (auto& it : mp) {
            freq.push_back(it.second);
        }

        int ans = INT_MAX;
        sort(freq.begin(), freq.end());

        for (int i = 0; i < freq.size(); i++) {
            int target = freq[i];
            int del = 0;

            for (int j = 0; j < freq.size(); j++) {
                if (freq[j] < target) {
                    del += freq[j];
                } else if (freq[j] > target + k) {
                    del += freq[j] - target - k;
                }
            }

            ans = min(ans, del);
        }

        return ans;
    }
};

int main() {
    Solution sol;

    string word = "aabcaba";
    int k = 0;

    int result = sol.minimumDeletions(word, k);
    cout << "Minimum deletions to make string k-special: " << result << endl;

    return 0;
}
