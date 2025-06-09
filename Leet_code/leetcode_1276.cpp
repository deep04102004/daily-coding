#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        int t = tomatoSlices;
        int c = cheeseSlices;

        // Check if solution is possible
        if ((t - 2 * c) % 2 != 0 || (t - 2 * c) / 2 < 0 || c - (t - 2 * c) / 2 < 0) {
            return {};
        }

        // x = number of jumbo burgers, y = number of small burgers
        int jumbo = (t - 2 * c) / 2;
        int small = c - jumbo;

        return {jumbo, small};
    }
};

int main() {
    int tomatoSlices=16, cheeseSlices=7;

    Solution sol;
    vector<int> result = sol.numOfBurgers(tomatoSlices, cheeseSlices);

    if (result.empty()) {
        cout << "No valid solution\n";
    } else {
        cout << "Number of jumbo burgers: " << result[0] << "\n";
        cout << "Number of small burgers: " << result[1] << "\n";
    }

    return 0;
}
