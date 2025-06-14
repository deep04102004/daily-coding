#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    // Returns the first character that is not '9'
    char firstnonnine(string str) {
        for (char c : str) {
            if (c != '9') {
                return c;
            }
        }
        return '9';
    }

    // Returns the first character that is not '0'
    char firstnonzero(string str) {
        for (char c : str) {
            if (c != '0') {
                return c;
            }
        }
        return '0';
    }

    int minMaxDifference(int num) {
        string str = to_string(num);
        string str1 = str;
        char target_max = firstnonnine(str);
        char target_min = firstnonzero(str1);

        // Replace all occurrences of target_max with '9'
        for (char& c : str) {
            if (c == target_max) {
                c = '9';
            }
        }

        // Replace all occurrences of target_min with '0'
        for (char& c : str1) {
            if (c == target_min) {
                c = '0';
            }
        }

        int max_val = stoi(str);
        int min_val = stoi(str1);
        return max_val - min_val;
    }
};

int main() {
    Solution sol;

    int num = 11891; // You can change this value to test other cases
    int result = sol.minMaxDifference(num);

    cout << "Input: " << num << endl;
    cout << "Max-Min Difference: " << result << endl;

    return 0;
}
