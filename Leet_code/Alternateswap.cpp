#include<bits/stdc++.h>
using namespace std;
vector<int>alternateswap(vector<int>a){
  int n= a.size();
  for(int i=0;i<n-1;){
    swap(a[i],a[i+1]);
    i+=2;
  }
  return a;
}
int main(){
    vector<int>nums={1,2,3,4,5};
    for(int&b:alternateswap(nums)){
        cout<<b<<" ";
    }
}