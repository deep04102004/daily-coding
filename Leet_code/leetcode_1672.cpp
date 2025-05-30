#include<bits/stdc++.h>
using namespace std;
int maximumWealth(vector<vector<int>>& accounts) {
        vector<int>wealth;
        for(int i=0;i<accounts.size();i++){
            int sum=0;
            for(int j=0;j<accounts[0].size();j++){
                sum+=accounts[i][j];
            }
            wealth.push_back(sum);
        }
        int maxwealth=*max_element(wealth.begin(),wealth.end());
        return maxwealth;
    }
int main(){
vector<vector<int>> accounts={{1,2,3},{3,2,1}};
cout<<"Maximum Wealth is: "<<maximumWealth(accounts);
}