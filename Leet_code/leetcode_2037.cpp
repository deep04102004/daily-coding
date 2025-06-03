#include<bits/stdc++.h>
using namespace std;
int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int ans=0;
        for(int i=0;i<seats.size();i++){
            int diff=abs(seats[i]-students[i]);
            ans+=diff;
        }
        return ans;
    }
int main(){
   vector<int>seats={3,1,5};
   vector<int>students={2,7,4};
   cout<<minMovesToSeat(seats,students);
}