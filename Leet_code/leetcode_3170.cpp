#include <bits/stdc++.h>
using namespace std;

struct Compare {
    bool operator()(const pair<char, int>& a, const pair<char, int>& b) const {
        if (a.first == b.first)
            return a.second < b.second; // Higher index gets priority (min heap behavior)
        return a.first > b.first; // Min priority on char
    }
};

string clearStars(string s) {
    priority_queue<pair<char, int>, vector<pair<char, int>>, Compare> pq;

    for (int i = 0; i < (int)s.length(); i++) {
        if (s[i] == '*') {
            if (!pq.empty()) {
                auto x = pq.top();
                pq.pop();
                s[x.second] = '*';
            }
        } else {
            pq.push({s[i], i});
        }
    }

    string ans = "";
    for (char c : s) {
        if (c == '*') continue;
        ans += c;
    }
    return ans;
}

int main() {
    string s = "aaba*";
    cout << clearStars(s) << endl;
    return 0;
}
