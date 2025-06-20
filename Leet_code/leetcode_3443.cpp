#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
public:
    int maxDistance(string s, int k) {
        int ans = 0;
        int north = 0, south = 0, east = 0, west = 0;

        for (char it : s) {
            switch (it) {
                case 'N':
                    north++;
                    break;
                case 'S':
                    south++;
                    break;
                case 'E':
                    east++;
                    break;
                case 'W':
                    west++;
                    break;
            }

            int times1 = min({north, south, k});           // changes for N/S
            int times2 = min({east, west, k - times1});    // changes for E/W

            ans = max(ans,
                      count(north, south, times1) +
                      count(east, west, times2));
        }

        return ans;
    }

    int count(int drt1, int drt2, int times) {
        return abs(drt1 - drt2) + times * 2;
    }
};

int main() {
    Solution sol;

    string s = "NSWWEW";  // sample input
    int k = 2;

    int result = sol.maxDistance(s, k);
    cout << "Maximum distance: " << result << endl;

    return 0;
}
