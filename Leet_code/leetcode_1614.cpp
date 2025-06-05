#include<bits/stdc++.h>
using namespace std;
 int maxDepth(string s) {
        int n=s.length();
        int count=0;
        int max_depth=INT_MIN;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                count++;
            }
            else if(s[i]==')'){
                count--;
            }
            max_depth=max(count,max_depth);
        }
        return max_depth;
    }
int main(){
   string s="(1+(2*3)+((8)/4))+1";
   cout<<maxDepth(s);
}