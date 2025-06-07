#include<bits/stdc++.h>
using namespace std;
vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> result(n);
        unordered_set<int> seenA, seenB, common;
        int count = 0;

        for (int i = 0; i < n; ++i) {
            seenA.insert(A[i]);
            seenB.insert(B[i]);

            // Check A[i]
            if (seenB.count(A[i]) && !common.count(A[i])) {
                ++count;
                common.insert(A[i]);
            }

            // Check B[i]
            if (seenA.count(B[i]) && !common.count(B[i])) {
                ++count;
                common.insert(B[i]);
            }

            result[i] = count;
        }

        return result;
    }
int main(){
  vector<int>A={1,3,2,4};
  vector<int>B={3,1,2,4};
  for(int&a:findThePrefixCommonArray(A,B)){
    cout<<a<<" ";
  }
}