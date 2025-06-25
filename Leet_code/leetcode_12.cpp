#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int, string>> valueSymbol = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"},  {90, "XC"},  {50, "L"},  {40, "XL"},
            {10, "X"},   {9, "IX"},   {5, "V"},   {4, "IV"},
            {1, "I"}
        };

        string result = "";

        for (size_t i = 0; i < valueSymbol.size(); ++i) {
            int value = valueSymbol[i].first;
            string symbol = valueSymbol[i].second;
            while (num >= value) {
                result += symbol;
                num -= value;
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    int number = 1994;
    cout << "Roman numeral of " << number << " is: " << sol.intToRoman(number) << endl;
    return 0;
}
