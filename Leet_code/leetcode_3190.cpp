#include<bits/stdc++.h>
using namespace std;
int minimumOperations(vector<int>& nums) {
        int operation=0;
        for(int&a:nums){
            if(a%3!=0){
                operation++;
            }
        }
        return operation;
    }
int main(){
    vector<int>nums={1,2,3,4};
    cout<<"Minimum Operations: "<<minimumOperations(nums);

}