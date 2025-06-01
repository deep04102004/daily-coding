#include<bits/stdc++.h>
using namespace std;
long long distributeCandies(int n, int limit) {
        long long res = 0;
        for (int i = 0; i <= min(limit, n); i++) {
            if (n - i <= 2 * limit)
                res += min(n - i, limit) - max(0, n - i - limit) + 1;
        }
        return res;
    }
int main(){
     int n=5,limit=2;
     cout<<distributeCandies(n,limit);
}