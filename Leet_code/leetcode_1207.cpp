#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        for (int& a : arr) mp[a]++;
        
        unordered_set<int> freq;
        for (auto& b : mp) {
            freq.insert(b.second);
        }

        return freq.size() == mp.size();
    }
};

int main() {
    Solution sol;
    
    vector<int> arr = {1, 2, 2, 1, 1, 3};  // Frequencies: 1→3, 2→2, 3→1 → All unique
    
    if (sol.uniqueOccurrences(arr)) {
        cout << "All occurrences are unique." << endl;
    } else {
        cout << "Occurrences are not unique." << endl;
    }

    return 0;
}
