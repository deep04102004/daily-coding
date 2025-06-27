#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        unordered_map<char, int> mp;

        string s1 = "qwertyuiop", s2 = "asdfghjkl", s3 = "zxcvbnm";
        for (char &ch : s1) mp[tolower(ch)] = 1;
        for (char &ch : s2) mp[tolower(ch)] = 2;
        for (char &ch : s3) mp[tolower(ch)] = 3;

        for (string &s : words) {
            int row = mp[tolower(s[0])];
            bool flag = true;
            for (char &ch : s) {
                if (mp[tolower(ch)] != row) {
                    flag = false;
                    break;
                }
            }
            if (flag) ans.push_back(s);
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<string> words = {"Hello", "Alaska", "Dad", "Peace"};
    vector<string> result = sol.findWords(words);

    cout << "Words that can be typed using one row of the keyboard:\n";
    for (const string& word : result) {
        cout << word << endl;
    }

    return 0;
}
