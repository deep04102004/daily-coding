#include<bits/stdc++.h>
using namespace std;
int maxDifference(string s) {
        int ans=0;
        vector<int>v(26,0);

        for(char &ch:s) v[ch-'a']++;

        int maxEven=INT_MAX,maxOdd=INT_MIN;
        for(int i=0;i<26;i++){
            if(v[i]>0){
                if(v[i]&1) maxOdd=max(maxOdd,v[i]);
                else maxEven=min(maxEven,v[i]);
            }
        }
        
        return maxOdd-maxEven;
    }
int main(){
   string s="aaaaabbc";
   cout<<maxDifference(s);
}