#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string longestcommonprefix(string s1, string s2, string s3) {
        int n = min({s1.size(), s2.size(), s3.size()});
        string result = "";
        for (int i = 0; i < n; i++) {
            if (s1[i] == s2[i] && s2[i] == s3[i]) {
                result += s1[i];
            } else {
                break;
            }
        }
        return result;
    }

    int findMinimumOperations(string s1, string s2, string s3) {
        string s = longestcommonprefix(s1, s2, s3);
        int operation = s1.size() + s2.size() + s3.size() - 3 * (s.size());
        return s.empty() ? -1 : operation;
    }
};

int main() {
    string s1 = "abcde";
    string s2 = "abfgh";
    string s3 = "abxyz";

    Solution sol;
    int result = sol.findMinimumOperations(s1, s2, s3);
    cout << "Minimum operations: " << result << endl;

    return 0;
}
