#include <bits/stdc++.h>
using namespace std;

vector<int> ans;

// Recursive DFS function
void solve(int num, int tog, int &n) {
    if (num > n || (tog == 0 && num % 10 == 0)) {
        return;
    }
    ans.push_back(num);

    solve(10 * num, 1, n);  // move to next level (e.g., 1 → 10 → 100 ...)
    solve(num + 1, 0, n);   // move horizontally (e.g., 1 → 2 → 3 ...)
}

// Solution class with lexicalOrder method
class Solution {
public:
    vector<int> lexicalOrder(int n) {
        ans.clear();
        solve(1, 0, n);
        return ans;
    }
};

// Main function
int main() {
    int n=13;

    Solution obj;
    vector<int> result = obj.lexicalOrder(n);

    cout << "Lexicographical order from 1 to " << n << ":\n";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
