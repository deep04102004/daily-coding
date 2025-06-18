#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, char> mp;
        unordered_set<char> mpvalues;

        for (int i = 0; i < s.size(); i++) {
            char c1 = s[i];
            char c2 = t[i];

            if (mp.count(c1)) {
                if (mp[c1] != c2) return false;
            } else {
                if (mpvalues.count(c2)) return false;
                mp[c1] = c2;
                mpvalues.insert(c2);
            }
        }

        return true;
    }
};

int main() {
    Solution sol;
    string s = "egg";
    string t = "add";

    if (sol.isIsomorphic(s, t)) {
        cout << s << " and " << t << " are isomorphic strings." << endl;
    } else {
        cout << s << " and " << t << " are not isomorphic strings." << endl;
    }

    return 0;
}
