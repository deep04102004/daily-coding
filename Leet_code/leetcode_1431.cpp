#include<bits/stdc++.h>
using namespace std;
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>v1;
       int max_value=candies[0];
       for(int j=0;j<candies.size();j++){
        if(candies[j]>max_value){
            max_value=candies[j];
        }
       }
        for(int i=0;i<candies.size();i++){
            if((candies[i]+extraCandies)>=max_value){
                v1.push_back(true);
            }
            else
            v1.push_back(false);
        }
        return v1;
}
int main(){
    vector<int>candies={2,3,5,1,3};
    int extraCandies = 3;
    vector<bool>ans=kidsWithCandies(candies,extraCandies);
    for(bool b:ans){
        cout<<b<<" ";
    }

}
