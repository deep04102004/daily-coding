#include<bits/stdc++.h>
using namespace std;
 string reversePrefix(string word, char ch) {
        stack<char> st;
        bool flag = false;
        for(int i=0; i<word.size(); i++){
            st.push(word[i]);
            if(word[i] == ch){
                flag = true;
                break;
            }
        }
        if(!flag) return word;
        int p=0;
        string ans=word;
        while(!st.empty()){
            ans[p]=st.top();
            st.pop();
            p++;
        }
        return ans;
    }
int main(){
   string word="abcdefd";
   char ch='d';
   cout<<reversePrefix(word,ch);
}