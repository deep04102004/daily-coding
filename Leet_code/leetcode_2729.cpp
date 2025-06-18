#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isFascinating(int n) {
        string a = to_string(2 * n);
        string b = to_string(3 * n);
        string k = to_string(n);
        string s = k + a + b;

        sort(s.begin(), s.end());

        if (s.size() != 9) {
            return false;
        }

        unordered_set<char> mp;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] < '1' || s[i] > '9') { // invalid if 0 or non-digit
                return false;
            }
            mp.insert(s[i]);
        }

        return mp.size() == 9;
    }
};

int main() {
    Solution sol;
    int n = 192; // Example test input
    if (sol.isFascinating(n)) {
        cout << n << " is a fascinating number." << endl;
    } else {
        cout << n << " is not a fascinating number." << endl;
    }

    return 0;
}
