#include<bits/stdc++.h>

//find the element in each position
int nCr (int n, int r)
{
    long long res=1;
    for(int i=0;i<r;i++)
    {
        res= res * (n-i);
        res = res/ (i+1);
    }
    return (int)(res);
}
vector<vector<int>> pascalTriangle(int N) {
    // Write your code here.
    vector<vector<int>> ans;
    for(int row=1;row<=N;row++)
    {
        vector<int> tempList;
        for(int col=1;col<=row;col++)
        {
            tempList.push_back(nCr(row-1,col-1));
        }
        ans.push_back(tempList);
    }    
    return ans;
}