#include<bits/stdc++.h>
using namespace std;
 int mySqrt(int x) {
        if(x==0) return 0;
        int left=1,right=x;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(mid==x/mid){
                return mid;
            }
            else if((mid)>x/mid){
                right=mid-1;
            }
            else left=mid+1;
        }
        return right;
    }
int main(){
    int x=144;
    cout<<mySqrt(x);
}