#include<bits/stdc++.h>
using namespace std;
int diffofsums(int n,int m)
{
    float k=n/m;
        int num1,num2;
        int sum=(n*(n+1))/2;   //use AP formula for sum for n natural numbers
        num2=(k/2)*(2*m+(k-1)*m); //here also use ap sum formula but this time it is general formula 
        num1=sum-num2;
        int diff=num1-num2;
        return diff;

}
int main(){
    int n=10,m=3;
    cout<<"Differnce of sums is: "<<diffofsums(n,m);
}