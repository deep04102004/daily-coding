#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumDifference(string s, int k) {
        int n = s.size();
        int ans = INT_MIN;

        for (int a = 0; a < 5; ++a) {
            for (int b = 0; b < 5; ++b) {
                if (a == b) continue;

                vector<int> s1(n + 1, 0), s2(n + 1, 0);

                for (int i = 0; i < n; ++i) {
                    s1[i + 1] = s1[i] + (s[i] - '0' == a);
                    s2[i + 1] = s2[i] + (s[i] - '0' == b);
                }

                int g[2][2];
                for (int i = 0; i < 2; ++i)
                    for (int j = 0; j < 2; ++j)
                        g[i][j] = INT_MIN;

                int j = 0;
                for (int i = k; i <= n; ++i) {
                    while (j + k <= i) {
                        if (s1[i] > s1[j] && s2[i] > s2[j]) {
                            int pa = s1[j] % 2;
                            int pb = s2[j] % 2;
                            g[pa][pb] = max(g[pa][pb], s2[j] - s1[j]);
                        }
                        ++j;
                    }

                    int pa = s1[i] % 2;
                    int pb = s2[i] % 2;
                    if (g[1 - pa][pb] != INT_MIN) {
                        ans = max(ans, s1[i] - s2[i] + g[1 - pa][pb]);
                    }
                }
            }
        }

        return (ans == INT_MIN) ? -1 : ans;
    }
};

int main() {
    string s = "1122211";  // Only one test case
    int k = 3;

    Solution sol;
    int result = sol.maximumDifference(s, k);
    cout << "Output: " << result << endl;

    return 0;
}
