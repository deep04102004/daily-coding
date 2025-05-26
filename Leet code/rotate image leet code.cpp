#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>>&matrix)
{
	int n=matrix.size();
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			swap(matrix[i][j],matrix[j][i]);
		}
	}
	for(auto&num:matrix)
	{
		reverse(num.begin(),num.end());
	}
	return matrix;
}

int main()
{
	vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
	vector<vector<int>>ans = rotate(matrix);
	for(vector<int>&n:ans)
	{
		for(int&v:n)
		{
			cout<<v<<" ";
		}
		cout<<endl;
	}
	
	
}
