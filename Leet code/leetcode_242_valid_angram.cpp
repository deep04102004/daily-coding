#include<iostream>
#include<vector>
using namespace std;
bool isangram(string s, string t)
{
    vector<int>v1(26,0);    //Frequency counter for string s
    vector<int>v2(26,0);    //Frequency counter for string t

    for(char&ch:s){
        v1[ch-'a']++;       //count of characters in string s      
    }
    for(char&ch:t){
        v2[ch-'a']++;       //count of characters in string t 
    }
    for(int i=0;i<26;i++){
        if(v1[i]!=v2[i]){    //compare both frequency counters
            return false;
        }
    }
   return true;    
}
int main(){
    string s="tar",t="rat";
    bool answer = isangram(s,t);
    if(answer==true)
    {
        cout<<"This is angram";
    }
    else
    cout<<"Not Angram";
}