#include<iostream>
#include<vector>
using namespace std;
vector<int> find_peak(vector<int>& mountain){
    vector<int>v1;
    for(int i=1;i<mountain.size()-1;i++){   //first and last elements are not peaks
        if(mountain[i]>mountain[i-1]&& mountain[i]>mountain[i+1]){ //condition that adjacent elements shouldn't be greater to be a peak
            v1.push_back(i);
        }
    }
    return v1;
}
int main(){
 vector<int>mountain ={1,4,3,8,5};
 vector<int> ans=find_peak(mountain);
 cout<<"peak is: ";
 for(int &n:ans){
    cout<<n<<" ";
 }
}