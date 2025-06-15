#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxDiff(int num) {
        string s = to_string(num);
        int maxVal = num, minVal = num;

        // Try all replacements for maximum
        for (char x = '0'; x <= '9'; x++) {
            string temp = s;
            for (char& c : temp) {
                if (c == x) c = '9';
            }
            if (temp[0] != '0') {
                maxVal = max(maxVal, stoi(temp));
            }
        }

        // Try all replacements for minimum
        for (char x = '0'; x <= '9'; x++) {
            for (char y : {'0', '1'}) {
                string temp = s;
                for (char& c : temp) {
                    if (c == x) c = y;
                }
                if (temp[0] != '0') {
                    minVal = min(minVal, stoi(temp));
                }
            }
        }

        return maxVal - minVal;
    }
};

int main() {
    int num = 9288;

    Solution sol;
    int result = sol.maxDiff(num);
    cout << "Maximum difference after replacements: " << result << endl;

    return 0;
}
