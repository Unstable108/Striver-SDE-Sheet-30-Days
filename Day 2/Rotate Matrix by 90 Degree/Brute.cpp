#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>> &matrix)
{
    int n=matrix.size();
    vector<vector<int>> rorate(n, vector<int>(n,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            rorate[j][n-i-1]= matrix[i][j];
        }
    }
    return rorate;
}
int main()
{
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    int n= matrix.size();
    matrix = rotate(matrix);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            cout << matrix[i][j]<<" "<<endl; 
        }
        cout<< " "<<endl;;
    }
}