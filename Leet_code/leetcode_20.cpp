#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
        stack<char>st;
        for(char&ch:s){
            if(ch=='('||ch=='{'||ch=='['){
                st.push(ch);
            }
            else if(ch==')'||ch=='}'||ch==']'){
                if(st.empty()){
                    return false;
                }
                char top=st.top();
                st.pop();
                if(abs(ch-top)>2)return false;
            }
            else return false;
        }    
         return st.empty();
        }
int main(){
string s="([])";
if(isValid(s)){
    cout<<"True";
}
else cout<<"false";
}