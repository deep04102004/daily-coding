#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxPower(string s) {
        vector<int> power;
        int count = 1;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            if (s[i] == s[i + 1]) {
                count++;
            } else {
                power.push_back(count);
                count = 1;
            }
        }

        int maxpower = 0;
        for (int &a : power) {
            maxpower = max(maxpower, a);
        }

        return maxpower;
    }
};

int main() {
    Solution sol;
    string input = "abbcccddddeeeeedcba";
    cout << "Max power: " << sol.maxPower(input) << endl;
    return 0;
}
