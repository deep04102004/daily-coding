#include<bits/stdc++.h>
using namespace std;
 int numberOfMatches(int n) {
        int matches=0;
        while (n>1){
            matches+=n/2; //we can do this question in 1 line just "return n-1", but I did it with iterative approach. because this way it is more understandable.
            n=(n+1)/2;
        }
        return matches;
    }
int main(){
   int n=7;
   cout<<"Total matches "<<numberOfMatches(n);
}