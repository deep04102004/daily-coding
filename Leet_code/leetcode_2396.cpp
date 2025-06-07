#include<bits/stdc++.h>
using namespace std;
string convert_base(int n,int base){
        string map ="123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string result="";
        int num=n;
        while(num>0){
            int rem =num%base;
            result+=map[rem];
            num/=base;
        }
        reverse(result.begin(),result.end());
        return result;
     }
     bool isPalindrome(const string& number) {
    string rev = number;
    reverse(rev.begin(), rev.end());
    return number == rev;
}
   bool isStrictlyPalindromic(int n) {
    for (int base = 2; base <= n - 2; ++base) {
        string converted = convert_base(n, base);
        if (!isPalindrome(converted)) return false;
    }
    return true;
}
int main(){
  int n=9;
  if(isStrictlyPalindromic(n)){
    cout<<"True";
  }
  else cout<<"False";
}