#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int n;
    typedef long long ll;

    // Count how many products are ≤ midProduct
    ll findCountSmallest(vector<int>& nums1, vector<int>& nums2, ll midProduct) {
        ll count = 0;

        for (int i = 0; i < nums1.size(); i++) {
            if (nums1[i] == 0) {
                if (midProduct >= 0) count += nums2.size();
                continue;
            }

            if (nums1[i] > 0) {
                int l = 0, r = n - 1, m = -1;

                while (l <= r) {
                    int mid = l + (r - l) / 2;
                    ll prod = 1LL * nums1[i] * nums2[mid];
                    if (prod <= midProduct) {
                        m = mid;
                        l = mid + 1;
                    } else {
                        r = mid - 1;
                    }
                }
                count += (m + 1);
            } else {  // nums1[i] < 0
                int l = 0, r = n - 1, m = n;

                while (l <= r) {
                    int mid = l + (r - l) / 2;
                    ll prod = 1LL * nums1[i] * nums2[mid];
                    if (prod <= midProduct) {
                        m = mid;
                        r = mid - 1;
                    } else {
                        l = mid + 1;
                    }
                }
                count += (n - m);
            }
        }
        return count;
    }

    long long kthSmallestProduct(vector<int>& nums1, vector<int>& nums2, long long k) {
        n = nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        ll l = -1e10, r = 1e10;
        ll ans = 0;

        while (l <= r) {
            ll midProduct = l + (r - l) / 2;
            ll countSmallest = findCountSmallest(nums1, nums2, midProduct);

            if (countSmallest >= k) {
                ans = midProduct;
                r = midProduct - 1;
            } else {
                l = midProduct + 1;
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;
    
    vector<int> nums1 = {-4, -2, 0, 3};
    vector<int> nums2 = {2, 4};
    long long k = 1;

    cout << "K-th smallest product: " << sol.kthSmallestProduct(nums1, nums2, k) << endl;
    return 0;
}
