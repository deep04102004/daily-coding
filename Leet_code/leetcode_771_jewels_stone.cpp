#include <iostream>
#include<map>
#include <unordered_map>
using namespace std;
int num_j_in_s(string j,string s){
    int ans=0; 
    unordered_map<char,int>mp; //initialize unordered map
    for(char ch:j) mp[ch]++;  //store counts in map to corrosponding keyvalue

    for(char ch:s){
           if(mp[ch]>0){   //check how many values from stone are jewels
            ans++;  
           }
    }
    return ans;
}

int main(){
   string j="aA",s="aAAbbbBBB";
   int answer=num_j_in_s(j,s);
   cout<<"Answer: "<<answer;
}
