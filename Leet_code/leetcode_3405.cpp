#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int MX = 1e5;

long long fact[MX] = {0};
long long inv_fact[MX] = {0};

class Solution {
    long long qpow(long long x, int n) {
        long long res = 1;
        while (n) {
            if (n & 1) {
                res = res * x % MOD;
            }
            x = x * x % MOD;
            n >>= 1;
        }
        return res;
    }

    long long comb(int n, int m) {
        if (m > n || m < 0) return 0;
        return fact[n] * inv_fact[m] % MOD * inv_fact[n - m] % MOD;
    }

    void init() {
        if (fact[0]) return;

        fact[0] = 1;
        for (int i = 1; i < MX; i++) {
            fact[i] = fact[i - 1] * i % MOD;
        }

        inv_fact[MX - 1] = qpow(fact[MX - 1], MOD - 2);
        for (int i = MX - 1; i > 0; i--) {
            inv_fact[i - 1] = inv_fact[i] * i % MOD;
        }
    }

public:
    int countGoodArrays(int n, int m, int k) {
        init();
        return comb(n - 1, k) * m % MOD * qpow(m - 1, n - k - 1) % MOD;
    }
};

int main() {
    int n = 3, m = 2, k = 1;
    Solution sol;
    cout << sol.countGoodArrays(n, m, k) << endl;
    return 0;
}
