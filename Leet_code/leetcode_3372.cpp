#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> maxTargetNodes(vector<vector<int>>& edges1, vector<vector<int>>& edges2, int k) {
        vector<int> ans;
        const vector<vector<int>> graph1 = buildGraph(edges1);
        const vector<vector<int>> graph2 = buildGraph(edges2);

        int maxReachableInGraph2 = 0;
        int n2 = (int)graph2.size();

        if (k > 0) {
            for (int i = 0; i < n2; ++i)
                maxReachableInGraph2 = max(maxReachableInGraph2, dfs(graph2, i, -1, k - 1));
        }

        int n1 = (int)graph1.size();
        for (int i = 0; i < n1; ++i)
            ans.push_back(maxReachableInGraph2 + dfs(graph1, i, -1, k));

        return ans;
    }

private:
    // Returns the number of nodes that can be reached from u with k steps.
    int dfs(const vector<vector<int>>& graph, int u, int prev, int k) {
        if (k == 0)
            return 1;
        int res = 0;
        for (const int v : graph[u])
            if (v != prev)
                res += dfs(graph, v, u, k - 1);
        return 1 + res;
    }

    vector<vector<int>> buildGraph(const vector<vector<int>>& edges) {
        int maxNode = -1;
        for (const auto& edge : edges) {
            maxNode = max(maxNode, max(edge[0], edge[1]));
        }

        vector<vector<int>> graph(maxNode + 1);
        for (const auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        return graph;
    }
};

int main() {
    Solution sol;

    // Example edges for graph1 and graph2
    vector<vector<int>> edges1 = {{0,1},{0,2},{2,3},{2,4}};
    vector<vector<int>> edges2 = {{0,1},{0,2},{0,3},{2,7},{1,4},{4,5},{4,6}};
    int k = 2;

    vector<int> result = sol.maxTargetNodes(edges1, edges2, k);

    cout << "Result vector:\n";
    for (int val : result) {
        cout << val << " ";
    }
    cout << "\n";

    return 0;
}
