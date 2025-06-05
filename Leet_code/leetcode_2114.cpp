#include<bits/stdc++.h>
using namespace std;
int mostWordsFound(vector<string>& sentences) {
        char target =' ';
        int max_count=0;
        for(string&str:sentences){
            int count=0;
          for(char&ch:str){
            if(ch==target){
                count++;
            }
            max_count=max(count+1,max_count);
          }
        }
       return max_count; 
    }
int main(){
vector<string> sentences={"alice and bob love leetcode","i think so too","this is great thanks very much"};
cout<<mostWordsFound(sentences);
}