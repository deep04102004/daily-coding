#include<bits/stdc++.h>
using namespace std;
string removeStars(string s) {
        stack<char>st1;
        string str;
        for(char&ch:s){
            st1.push(ch);
            if(ch=='*'){
                st1.pop();
                st1.pop();
            }
        }
        while(!st1.empty()){
            str+=st1.top();
            st1.pop();
        }
         reverse(str.begin(),str.end());
         return str;
    }
int main(){
string s="leet**cod*e";
cout<<removeStars(s);
}