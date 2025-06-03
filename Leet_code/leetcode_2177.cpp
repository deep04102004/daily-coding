#include<bits/stdc++.h>
using namespace std;
 vector<long long> sumOfThree(long long num) {
        if(num%3==0){
            return{(num/3)-1,num/3,(num/3)+1};
        }
        
        return{};
    }
int main(){
long long num=33;
for(long long a:sumOfThree(num)){
    cout<<a<<" ";
}
}