#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len = flowerbed.size();
        for (int i = 0; i < len; i++) {
            bool left = i == 0 || flowerbed[i - 1] == 0;
            bool right = i == len - 1 || flowerbed[i + 1] == 0;

            if (left && right && flowerbed[i] == 0) {
                flowerbed[i] = 1;
                n--;
            }
        }
        return n <= 0;
    }
};

int main() {
    Solution sol;
    vector<int> flowerbed = {1, 0, 0, 0, 1}; // test case
    int n = 1;

    bool result = sol.canPlaceFlowers(flowerbed, n);
    cout << (result ? "true" : "false") << endl;

    return 0;
}
