#include <iostream>
#include <vector>
using namespace std;
int binary_search(vector<int>&t,int target){
    int s=0,e=t.size()-1;
     while(s<=e){
       int mid=s+(e-s)/2;   //find value of mid
       if(t[mid]==target){  //check element at mid is target
        return mid;
       }
       else if (mid>target)  //check if target is less than mid 
       {
        e=mid-1;     //assign mid-1 to end
       }
       else
       s=mid+1; //assign mid+1 to start 
     }
}
int main(){
    vector<int>v1={2,6,12,88,99};
    int target =88;
    int ans=binary_search(v1,target);
    cout<<"location is: "<<ans;
} 
