#include<bits/stdc++.h>
using namespace std;
int rever(int n){
        int ans=0;
        while(n>0){
            int rem =n%10;
            ans=ans*10+rem;
            n/=10;
        }
        return ans;
    }
    bool isSameAfterReversals(int num) {
        int m=num;
        int s=rever(m);
        int t=rever(s);
        if(t==m){
            return true;
        }
        else return false;
    }
int main(){
   int num=526;
   if(isSameAfterReversals(num)){
    cout<<"True";
   }
   else cout<<"False";
}