#include<bits/stdc++.h>
using namespace std;
int buyChoco(vector<int>& prices, int money) {
       sort(prices.begin(),prices.end());
       int temp =money;
       for(int i=0;i<2;i++){
        money=money-prices[i];
       }
       if(money>=0){
        return money;
       }
       return temp;
    }
int main(){
vector<int> prices={3,2,3};
int money=3;
cout<<buyChoco(prices,money);
}