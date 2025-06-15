#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int num = 1;
        int i = 0;
        while (i < n && k > 0) {
            if (arr[i] == num)
                i++;
            else
                k--;
            num++;
        }
        while (k--) num++;
        return num - 1;
    }
};

int main() {
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;

    Solution sol;
    int result = sol.findKthPositive(arr, k);
    cout << "The " << k << "th missing positive number is: " << result << endl;

    return 0;
}
