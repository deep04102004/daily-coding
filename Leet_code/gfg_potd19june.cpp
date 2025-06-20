#include <iostream>
#include <vector>
#include <string>
#include <cctype>  // for isupper
using namespace std;

class Solution {
public:
    int count(vector<int>& v, int& a) {
        while (a < 26) {
            if (v[a] > 0) {
                v[a]--;
                return a;
            }
            a++;
        }
        return -1;
    }

    string caseSort(string& s) {
        vector<int> upper(26, 0);  // Uppercase frequencies
        vector<int> lower(26, 0);  // Lowercase frequencies
        string ans = "";

        // Count frequency of characters
        for (char& ch : s) {
            if (isupper(ch))
                upper[ch - 'A']++;
            else
                lower[ch - 'a']++;
        }

        int x = 0, y = 0;

        // Rebuild result using sorted letters of same case
        for (char& ch : s) {
            if (isupper(ch)) {
                int index = count(upper, y);
                ans += ('A' + index);
            } else {
                int index = count(lower, x);
                ans += ('a' + index);
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;

    // 🔹 Predefined test input
    string s = "dCbA";

    string result = sol.caseSort(s);
    cout << "Original string: " << s << endl;
    cout << "Case-sorted string: " << result << endl;

    return 0;
}
