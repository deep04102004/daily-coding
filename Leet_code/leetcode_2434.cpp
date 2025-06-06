#include<bits/stdc++.h>
using namespace std;
string robotWithString(string s) {
        string ans = "", t = "";
        char mn = 'a';
        map<char, int> mp;

        for(auto i : s) mp[i]++;
        for(auto i : s) {
            t.push_back(i);
            mp[i]--;
            while(mn <= 'z' && !mp[mn]) mn++;
            while(!t.empty() && t.back() <= mn) {
                ans += t.back(); t.pop_back();
            }
        }
        while(!t.empty()) {
            ans += t.back(); t.pop_back();
        }
        return ans;
    }
int main(){
    string s="zza";
    cout<<robotWithString(s);
}