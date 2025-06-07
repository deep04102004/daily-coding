#include<bits/stdc++.h>
using namespace std;
string findValidPair(string s) {
        int freq[10] = {0};
        int n = s.length();

        for (int i = 0; i < n; i++) {
            freq[s[i] - '0']++;
        }

        for (int i = 0; i < n - 1; i++) {
            int fnum = s[i] - '0';
            int snum = s[i + 1] - '0';

            if (fnum != snum && 
                freq[fnum] == fnum && 
                freq[snum] == snum) {
                return s.substr(i, 2);
            }
        }
        
        return "";
    }
int main(){
string s="2523533";
cout<<findValidPair(s);
}