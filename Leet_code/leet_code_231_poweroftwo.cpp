#include<bits/stdc++.h>
using namespace std;
bool ispowoftwo(int n){
    if(n==0||n==INT_MAX||n==INT_MIN){     
        return false;
    }
    return !((n)&(n-1));    /*as we know binary number of 16 is 10000 and for n-1 means 15 it is 1111 then and of it is 
    00000 and not of that is 11111 which returns true*/
}
int main(){
    int n=123;
      if(ispowoftwo(n))
      cout<<"number is power of two";

    else
    cout<<"not power of two";
}