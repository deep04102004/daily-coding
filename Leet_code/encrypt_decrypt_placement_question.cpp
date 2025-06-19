/*Question: A company encrypts an array of integers by multiplying all its elements. To decrypt the array, you need to extract all the distinct prime numbers from the product.
1.Your task is to write a function that:
2. Takes an array of n integers.
3. Multiplies all the elements.
4. Finds all distinct prime factors of the resulting product.
Returns them in any order.*/
#include<bits/stdc++.h>
using namespace std;
vector<int>distinctprime(int num){
    unordered_set<int>primes;
    while(num%2==0){
         primes.insert(2);
         num/=2;
    }
    for(int i=3;i*i<=num;i+=2){
        if(num%i==0){
            primes.insert(i);
            num/=i;
        }
    }
    if(num>2){
        primes.insert(num);
    }
   return vector<int>(primes.begin(),primes.end());
}
int main(){
    int n,multiply=1;
    cout<<"Enter the number of Elements to Decrypt: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter Elements in array ";
    for(int&a:arr){
        cin>>a;
    }
    for(int&b:arr){
        multiply*=b;
    }
    vector<int> decrypt=distinctprime(multiply);
    cout<<"Decrypt Data is:";
    for(int&c:decrypt){
        cout<<c<<" ";
    }


}