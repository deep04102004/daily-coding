#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        long long m = mass;  // use long long to avoid overflow
        sort(asteroids.begin(), asteroids.end());

        for (int i = 0; i < asteroids.size(); i++) {
            if (asteroids[i] <= m) {
                m += asteroids[i];
            } else {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    int mass = 10;
    vector<int> asteroids = {3, 9, 19, 5, 21};

    bool result = sol.asteroidsDestroyed(mass, asteroids);
    cout << (result ? "True" : "False") << endl;

    return 0;
}
