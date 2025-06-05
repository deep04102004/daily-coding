#include<bits/stdc++.h>
using namespace std;
int reverseDegree(string s) {
      int sum=0;
     for(int i=0;i<s.length();i++){
        sum=sum+(('z'-s[i]+1)*(i+1));
     }   
     return sum;
    }
int main(){
   string s="abc";
   cout<<reverseDegree(s);
}