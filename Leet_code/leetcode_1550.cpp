#include<bits/stdc++.h>
using namespace std;
bool three_cons_oddS(vector<int>&arr){
    if(arr.size()<3){
        return false;
    }
    for(int i=0;i<arr.size()-2;i++){
        if((arr[i]%2!=0)&&(arr[i+1]%2!=0)&&(arr[i+2]%2!=0)){
            return true;
        }
    }
    return false;
}
int main(){
    vector<int>arr={2,6,4,1,3,5};
    cout<<three_cons_oddS(arr);
}