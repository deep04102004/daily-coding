#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> maxTargetNodes(vector<vector<int>>& edges1, vector<vector<int>>& edges2) {
        auto g1 = build(edges1);
        auto g2 = build(edges2);
        int n = g1.size(), m = g2.size();
        vector<int> c1(n), c2(m);
        int cnt1[2] = {0, 0}, cnt2[2] = {0, 0};

        dfs(g2, 0, -1, c2, 0, cnt2);
        dfs(g1, 0, -1, c1, 0, cnt1);

        int t = max(cnt2[0], cnt2[1]);
        vector<int> ans(n);
        for (int i = 0; i < n; ++i) {
            ans[i] = t + cnt1[c1[i]];
        }
        return ans;
    }

private:
    vector<vector<int>> build(const vector<vector<int>>& edges) {
        int n = edges.size() + 1;
        vector<vector<int>> g(n);
        for (const auto& e : edges) {
            int a = e[0], b = e[1];
            g[a].push_back(b);
            g[b].push_back(a);
        }
        return g;
    }

    void dfs(const vector<vector<int>>& g, int a, int fa, vector<int>& c, int d, int cnt[2]) {
        c[a] = d;
        cnt[d]++;
        for (int b : g[a]) {
            if (b != fa) {
                dfs(g, b, a, c, d ^ 1, cnt);
            }
        }
    }
};

int main() {
    Solution sol;
    vector<vector<int>> edges1 = {
        {0,1},{0,2},{2,3},{2,4}
    };
    vector<vector<int>> edges2 = {
        {0,1},{0,2},{0,3},{2,7},{1,4},{4,5},{4,6}
    };

    vector<int> result = sol.maxTargetNodes(edges1, edges2);

    cout << "Result: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
