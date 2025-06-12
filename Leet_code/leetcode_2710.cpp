#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeTrailingZeros(string num) {
        int n = num.size();
        int i = n - 1;
        while (i >= 0 && num[i] == '0') {
            i--;
        }
        return num.substr(0, i + 1);
    }
};

int main() {
    Solution sol;
    string num = "123000";
    cout << "Input: " << num << endl;
    cout << "Output: " << sol.removeTrailingZeros(num) << endl;
    return 0;
}
