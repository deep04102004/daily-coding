#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;

        int minPrice = prices[0], maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < minPrice)
                minPrice = prices[i];
            else
                maxProfit = max(maxProfit, prices[i] - minPrice);
        }

        return maxProfit;
    }
int main(){
   vector<int> prices={7,1,5,3,6,4};
   cout<<maxProfit(prices);
}