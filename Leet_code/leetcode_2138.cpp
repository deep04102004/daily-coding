#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        int rem = s.size() % k;

        // Add fill characters if the string is not divisible by k
        for (int i = 0; i < (k - rem) && rem != 0; i++) {
            s += fill;
        }

        string str = "";
        for (int j = 0; j < s.size(); j += k) {
            ans.push_back(s.substr(j, k));
        }

        return ans;
    }
};

int main() {
    Solution sol;
    
    // Sample input
    string s = "abcdefg";
    int k = 3;
    char fill = 'x';

    // Get the result
    vector<string> result = sol.divideString(s, k, fill);

    // Print the result
    for (const string& group : result) {
        cout << group << " ";
    }
    cout << endl;

    return 0;
}
