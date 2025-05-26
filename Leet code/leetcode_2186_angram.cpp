#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int minsteps(string s,string t)
{
    vector<int>v1(26,0);    //Frequency counter for string s
    vector<int>v2(26,0);     //Frequency counter for string t

    for(char&ch:s){
        v1[ch-'a']++;        //count of characters in string s 
    }
    for(char&ch:t){
        v2[ch-'a']++;        //count of characters in string t
    }
    int ans=0;
    for(int i=0;i<26;i++){
        ans+=abs(v1[i]-v2[i]);     //find absolute difference between both frequency counters
    }
    return ans;
}
int main()
{
    string s="ratmmm",t="tar";
    int answer=minsteps(s,t);
    cout<<"The maximum steps taken is: "<<answer;
}