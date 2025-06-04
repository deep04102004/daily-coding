#include<bits/stdc++.h>
using namespace std;
string finalString(string s) {
        string ans="";
        for(char ch:s){
            if(ch!='i'){
                ans+=ch;
                }
            else reverse(ans.begin(),ans.end());
        }
        return ans;
    }
int main(){
string s="string";
cout<<finalString(s);
}