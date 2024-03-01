#include <bits/stdc++.h>
using namespace std;

void sort012 ( vector<int>& a)
{
    int n = a.size();
    int low=0, mid=0, high=n-1;
    while(mid <= high)
    {
        if(a[mid]==0)
        {
            swap(a[low++],a[mid++]);
        }
        if(a[mid]==1)
        {
            mid++;
        }
        else{
           swap(a[mid], a[high--]);
        }
    }
}
int main()
{

    vector<int> arr = {0, 2, 1, 2, 0, 1} ;
    int n= arr.size();
    sort012(arr);
    cout << "After sorting:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}