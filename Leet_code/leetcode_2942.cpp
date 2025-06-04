#include<bits/stdc++.h>
using namespace std;
 vector<int> findWordsContaining(vector<string>& words, char x) {
        int n=words.size();
        vector<int>v1;
        for(int i=0;i<n;i++){
            string s=words[i];
            for(int j=0;j<s.length();j++){
                if(s[j]==x){
                  v1.push_back(i);
                  break; } } }
        return v1;
    }
int main(){
   vector<string>words={"leet","code"};
   char x ='e';
   for(int&a:findWordsContaining(words,x)){
    cout<<a<<" ";
   }

}