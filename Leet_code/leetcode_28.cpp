#include<bits/stdc++.h>
using namespace std;
int strStr(string haystack, string needle) {
        return haystack.find(needle); 
    }
int main(){
   string haystack="butsadbutsad",needle ="sad";
   cout<<strStr(haystack,needle);
}