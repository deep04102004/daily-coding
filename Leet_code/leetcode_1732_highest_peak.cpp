#include<iostream>
#include<vector>
using namespace std;
int largestaltitude(vector<int>& gain){
    int sum=0,ans=0;
    for(int&n:gain){
        sum+=n;        // sum all n gains
        ans=max(ans,sum);  //save maximum of ans and sum in ans
    }
    return ans;
}
int main(){
     vector<int>gain ={-5,1,5,0,4};
     int answer = largestaltitude(gain);
     cout<<"Highest altitude is: "<<answer;
}