#include <bits/stdc++.h>
using namespace std; // Specify the std namespace
int majorityElement(vector<int> v) {
	// Write your code here
	int n= v.size();
	map<int,int>mpp;
	for(int i=0;i<n;i++)
	{
		mpp[v[i]]++;
	}
	for(auto it:mpp)
	{
		if(it.second > n/2){
			return it.first;
		}
	}
        return-1;
}