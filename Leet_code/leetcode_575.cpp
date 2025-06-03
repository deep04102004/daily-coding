#include<bits/stdc++.h>
using namespace std;
int distributeCandies(vector<int>& candyType) {
       int n=candyType.size();
       unordered_map<int,int>mp;
       for(int&a:candyType)mp[a]++;
       if(n/2==mp.size()){
        return mp.size();
       }
       else if((n/2)<mp.size()){
        return (n/2);
       }
        return mp.size();
    }
int main(){
  vector<int>candyType={1,1,2,2,3,3};
  cout<<distributeCandies(candyType);
}