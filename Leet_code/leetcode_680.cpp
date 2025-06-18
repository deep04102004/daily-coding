#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool ispalin(string str) {
        string temp = str;
        reverse(temp.begin(), temp.end());
        if (temp == str) {
            return true;
        }
        return false;
    }

    bool validPalindrome(string s) {
        int r = 0, l = s.size() - 1;
        while (r < l) {
            if (s[r] != s[l]) {
                return ispalin(s.substr(r + 1, l - r)) || ispalin(s.substr(r, l - r));
            }
            r++;
            l--;
        }
        return true;
    }
};

int main() {
    Solution sol;
    string s = "abca";
    if (sol.validPalindrome(s)) {
        cout << s << " can be a palindrome by deleting at most one character." << endl;
    } else {
        cout << s << " cannot be a palindrome even after deleting one character." << endl;
    }
    return 0;
}
