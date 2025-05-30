#include<bits/stdc++.h>
using namespace std;
bool detectCapitalUse(string word) {
        int cap=0,lower=0;
        int l=word.length();
        for(int i=0;i<l;i++){
            if(islower(word[i])){
                lower++;
            }
            else cap++;
        }
        if(cap==l||lower==l||(isupper(word[0])&& lower==l-1)) return true;

        else return false;
    }
int main(){
    string word="USA";
    if(detectCapitalUse(word)){
        cout<<"True";
    }
    else cout<<"False";
}