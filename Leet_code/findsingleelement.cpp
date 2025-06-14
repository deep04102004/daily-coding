#include<bits/stdc++.h>
using namespace std;
//we have give 2m+1 elements in an array where m elements have their duplicate but one element is single. So, we have to find that single Element.
int findsingleement(vector<int>nums){
    int n= nums.size();
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^nums[i];
    }
    return ans;
}
int main(){
  vector<int>nums={6,2,6,5,5,2,4};
  cout<<findsingleement(nums);
}